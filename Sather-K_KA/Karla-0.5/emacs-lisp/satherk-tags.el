;;; -*- Mode: Emacs-Lisp;  -*-
;;; File: satherk-tags.el
;;; Author: Heinz Schmidt (hws@csis.dit.csiro.AU)
;;; Copyright (C) CSIRO Division of Information Technology, 1992
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;;* FUNCTION: Satherk hyper text based on emacs TAGS.
;;;*
;;;* RELATED PACKAGES: satherk.el
;;;*
;;;* HISTORY:
;;;  * Last edited: Jul  5 17:49 1994 (frick)
;;;  *  Jun 21 16:37 1994 (frick): split off sather-tags.el
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(require 'tags)

(defvar *satherk-foreign-class-name* "C")

;;;- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

(defun goto-satherk-tag ()
  "Find the current satherk tag point is on in TAGS file and proceed 
to the next line in the TAGS file."
  (interactive)
  (let (file startpos linebeg
	     ;; avoid highlighting every one of hundred files
	     ;; highlight on a higher level, what the user is going
	     ;; to see!
       (hilit-auto-highlight-maxout 0))
    (visit-tags-table-buffer)
    (beginning-of-line) (search-forward "\177")
    (setq file (expand-file-name (file-of-tag)
				 (file-name-directory tags-file-name)))
    (setq linebeg (buffer-substring (1- (point))
				    (save-excursion (beginning-of-line) (point))))
    (search-forward ",")
    (setq startpos (read (current-buffer)))
    ;; visit file and position to the right place according to the tags logic.
    (find-file file)
    (widen)
    (let ((offset 1000)
	  found
	  (pat (concat "^" (regexp-quote linebeg))))
      (or startpos (setq startpos (point-min)))
      (goto-char startpos)
      (while (not (or found (bobp)))
	(setq found (re-search-forward pat (+ startpos offset) t))
	(cond ((not found)
	       (setq offset (* 2 offset))
	       (goto-char (- startpos offset)))))
      (or found (re-search-forward pat nil t)))))

(defun satherk-tag-at-point (prompt default)
  "Return the Satherk symbol at or left of point."
  (interactive)
  (require-satherk-tags-completion)
  (let* ((p (point))
	 (m (mark))
	 (sym (save-excursion		
		(let ((ch (char-after (point))))
		  (if (or (null ch)
			  (looking-at "\n")
			  (not (memq (char-syntax ch) '(?w ?_))))
		      (backward-word 1))
		  (thing-symbol (point)))))
	 (from (car sym))
	 (to (cdr sym)))
    (if (and m			; is empty when Emacs starts up
	     (/= p m) (<= from p) (<= p to) (<= from m) (<= m to))
	(setq from (min p m) to (max p m)))
    (completing-read-tag prompt (or default (buffer-substring from to)))))

(defun completing-read-tag (prompt default &optional class-only)
  (require-satherk-tags-completion)
  (let ((sym (completing-read 
	      (format "%s (Default %s): " prompt default)
	      tags-completion-obarray
	      (if class-only 'satherk-class-tag-p 'satherk-tag-p))))
    (if (string-equal sym "") (setq sym (or default "")))
    (if (satherk-tag-p (intern sym)) sym
      (error "%s: not a known Satherk tag." sym))))

(defvar satherk-class-feature-separator "::")

(defun edit-definitions (&optional ARG symbol default class) 
  "Find the definitions of SYMBOL, visit the file and position to the cursor to
the first definition. DEFAULT is a string that is used to prompt for SYMBOL. The
region marked or else the symbol under point is the default to look up.  To
continue searching for next definition, use command \\[tags-loop-continue].
If CLASS is given, look only for a definition in CLASS. 

With a prefix arg (first argument when called from a program), restrict to the
possibly inherited definition in a class to be prompted for. The current class
or the last (interesting) one is used if CLASS is nil.

The facility is based on the Emacs TAGS functions (cf. satherk-tags for more
details). If there is no current TAGS table, the command offers to find or
create one."
  (interactive "P")
  (if (null symbol) 
      (setq symbol (satherk-tag-at-point "Edit Definitions" default)))
  (cond ((or class (and ARG (not (classp symbol))))
	 (setq class 
	       (or class (completing-read-tag "Class" 
					      (or *class-of-interest*
						  (satherk-which-class t))
					      t))))
	((classp symbol) (setq class nil)))
  (record-interest class symbol)
  (condition-case err
      (progn (satherk-find-tag class symbol)
	     (if class
		 (message "%s%s%s from %s" 
			  class satherk-class-feature-separator symbol
			  (satherk-which-class t))))
    (error (error "No symbol %s%s." (if class (format "%s::" class) "") 
		  symbol))))

(defun edit-this-satherk-definition (&optional arg)
  "Like edit-definition but fills in all arguments with defaults,
so as to ease kbd macro or mouse use. The symbol pointed to is looked up.
The class is the last interesting class, i.e. the one used with
edit-definition last. If the command is used the first time,
it chooses the current class in Satherk source code and, in a hierarchy
buffer, the closest class preceding point."
  (interactive)
  (require-satherk-tags-completion)
  (let ((symbol (satherk-symbol-after-point)))
    (edit-definitions 
     0 symbol nil
     (if (not (classp symbol))
	 (or *class-of-interest* 
	     (condition-case err	; allow click in hierarchy buffer
		 (satherk-which-class t)
	       (error nil))
	     ;; find class before point
	     (and (re-search-backward "[A-Z]" nil t)
		  (satherk-symbol-before-point)))))))
  
(defun s-search-forward-symbol (name) 
  (search-next-satherk-symbol name t t t t))

(defun search-next-satherk-symbol (name &optional def call comment string)
  "Find the next caller in current buffer. Return nil if current file does
not contain one so this can run under tags-loop-continue.
DEF CALL and COMMENT are booleans telling whether or not corresponding
occurrences of symbols are to be included."
  (let (found point-found)
    (while (and (not found)
		(re-search-forward (format "\\<%s\\>" name) nil t))
      (setq point-found (- (point) (length name)))
      (if (and (string-equal (satherk-symbol-before-point t) name)
	       (cond ((in-comment-p point-found)
		      (and comment (looking-at "'")
			   (= (char-after (1- point-found)) ?`)))
		     ((in-quoted-string-p (point))
		      (and string (looking-at "'")
			   (= (char-after (1- point-found)) ?`)))
		     (t (if (in-feature-head) def call))))
	  (setq found t)))
    found))

(defun edit-callers (&optional string)
  "Find all callers or users of a feature or class symbol at point.  Visit the
file and position to the cursor to the first caller.  The command prompts for
the name.  The region marked or else the symbol under point is the default to
look up.
To continue searching for next caller, use command \\[tags-loop-continue].
The facility is based on the Emacs TAGS functions (cf. satherk-tags for more
details). If there is no current TAGS table, the command offers to find or
create one."
  (interactive)
  (setq tags-loop-form (list 'search-next-satherk-symbol
			     (satherk-tag-at-point "Edit Callers" string)
			     nil			;def
			     t))
  (tags-loop-continue t))

(defun classp (string)
  (string-equal string (upcase string)))

(defun satherk-find-tag (next &optional symbol)
  "For NEXT = nil, look up the first definition of SYMBOL.
    NEXT = t, look up the next definition of SYMBOL.
    NEXT = some class, look up the possibly inherited definition of SYMBOL in class.
    SYMBOL is optional if NEXT = t."
  (cond ((eq next t) (find-tag "" t)
	 (if (null symbol) (setq symbol last-tag)))
	((and (stringp next) 
	      (string-equal next *satherk-foreign-class-name*))	; names in class C are unique
	 (satherk-find-tag nil symbol))
	(next				; position to defining class
	 (satherk-find-tag nil (symbol-name (defining-class 
					     (intern symbol)
					     (intern next))))
	 ;; there find symbol, must be next	      
	 (setq last-tag symbol)		; next will find this
	 (satherk-find-tag t symbol))
	(t (let ((comment-start "--"))
	     (find-tag-other-window symbol))))
  ;; found ... 'cause otherwise the find-tags signal error
  (let* ((classp (classp symbol))
	 (pat 
	  (if classp
	      (format "class[ \n]*%s[ \t\n{-]" symbol)
	    (format 
	     ;; accept multidefs like x,y:REAL;
	     "\\(private[ \t]\\)?\\(\\(const\\|readonly\\|shared\\)[ \t]\\)?\\(.*,[ \t]*\\)*%s[ ,:\t(;]"
	     symbol symbol))))
    (while (progn (skip-chars-forward " \t") (not (looking-at pat))) (find-tag "" t))
    ;; found right one or error
    (cond ((looking-at pat)
	   (if (not classp) (satherk-which-class)
	     (message "Found Class: %s" symbol))
	   (setq tags-loop-form '(satherk-find-tag t)))
	  (t ;;find-tag should throw if it fails, so we should not end up here.
	   (error "Satherk-find-tag internal error.")))
    ;; in case we run under tags-loop-continue return t
    t))


;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Mini choice facilities that will eventually go away
;;; or be realized based on Emacs 19 functions and/or external UI servers.
;;; We want our software to go to this small portable interface when
;;; choices are presented to the user.
;;; On a tty Emacs it can use the minibuffer, or an electric mode like
;;; the electric buffer list.
;;; Under X it can bringup panels and menus.

(defun choose-item (item-list &optional label default)
  "Present a single choice titled LABEL and return the item chosen from
ITEM-LIST, a list of conses the car of which is a string, or an obarray
 (see try-completion)."
  (interactive)
  (if (null label) (setq label "Choices: "))
      (completing-read
       (if default
	   (format "%s (Default %s): " default)
	 label)
       item-list))

;;; Improve the tags facility by having it offer completion for
;;; the file names in the tag file.
(defun list-tags (&optional string)  
  "Display list of tags in FILE from the current tags table. 
FILE should not contain a directory spec unless it has one in the tag table.
Use space to see the possible completions."
  (interactive)
  (if (null string) 
      (setq string (choose-item 
		    (mapcar '(lambda (x) (cons x x)) (tag-table-files))
		    "List tags (in file, space to complete): " )))
  (with-output-to-temp-buffer "*Tags List*"
    (princ "Tags in file ")
    (princ string)
    (terpri)
    (save-excursion
      (visit-tags-table-buffer)
      (goto-char 1)
      (search-forward (concat "\f\n" string ","))
      (forward-line 1)
      (while (not (or (eobp) (looking-at "\f")))
	(princ (buffer-substring (point)
				 (progn (skip-chars-forward "^\177")
					(point))))
	(terpri)
	(forward-line 1)))
      ;; make is sensitive to Satherk commands
      (set-buffer (get-buffer "*Tags List*"))
      (satherk-mode)))

(defun satherk-dictionary ()
  "List all known tags in alphabetic order. User variable fill-column 
controls line breaking."
  (interactive)
  (switch-to-buffer (get-buffer-create "*Tags Dictionary*"))
  (delete-region (point-max) (point-min))
  (insert "Satherk Tags Dictionary:\n")
  (mapcar '(lambda (x) (insert (format "%s " x))
	     (if (> (current-column) (or fill-column 60))
		 (insert "\n")))
	  tags-completion-obarray)
  (beginning-of-buffer)
  (satherk-mode))

(defun satherk-apropos (string)
  "Display list of all Satherk tags in tag table REGEXP matches.
The class of a symbol is included."
  (interactive "sSatherk apropos (regexp): ")
  (require-satherk-tags)
  (let ((pat (concat "\\(class[ \t\n]\\|" string "\\)")) ; also stop at a class begin
	class seen)
    (with-output-to-temp-buffer "*Tags List*"
      (princ "Tags matching regexp ")
      (prin1 string)
      (terpri)
      (save-excursion
	(visit-tags-table-buffer)
	(goto-char 1)
	(while (re-search-forward pat nil t)
	  (backward-sexp)
	  (cond ((looking-at "class[ \t\n]")
		 (forward-char 6) (skip-chars-forward " \t\n")
		 ;; record it 
		 (setq class 
		       (buffer-substring (point)
					 (save-excursion
					   (re-search-forward "[ {\177]")
					   (1- (point))))))
		((looking-at "\\(private\\|const\\|readonly\\|shared\\)[ \t\n]")
		 (forward-sexp))
		((save-excursion (beginning-of-line 0) (looking-at "")) ; file name
		 (forward-sexp))
		((re-search-forward string (save-excursion (re-search-forward "[:,=; ({-\177]")
							   (point)) t)
		 ;; not just matchting "class" like in FOO_CLASS
		 (let ((name (buffer-substring (progn (backward-sexp) (point))
					       (progn (re-search-forward "[:,=; ({-\177]")
						      (1- (point))))))
		   (cond ((classp name)
			  (let ((sym (intern name))) ; avoid mention parent twice
			    (cond ((memq sym seen))
				  (t (push sym seen) (princ name) (terpri)))))
			 ;; for others assume class prefixes disambiguate
			 (t (princ (format "%s%s%s" class satherk-class-feature-separator name))
			    (terpri)))))
		(t (forward-sexp)))))
      ;; make is sensitive to Satherk commands
      (set-buffer (get-buffer "*Tags List*"))
      (satherk-mode)
      )))

(defun tags-multiple-query-replace-from-buffer (buffer)
  "Use BUFFER, prompted for when invoked interactively, as spec for 
multiple tags-query-replace. Each line in BUFFER is a pair of strings 
to query-replace in all tag files."
  (interactive "bBuffer containing replace spec: ")
  (tags-multiple-query-replace-loop buffer 'regular-query-replace-fn))

(defun satherk-tags-multiple-replace-from-buffer (buffer ARG) 
"Use BUFFER, prompted for when invoked interactively, as spec for multiple
replacements. Each line in BUFFER is a pair of strings to replace in all tag
files. All definitions, calls and references are replaced silently. Moreover
occurrences in comment and quoted strings are replaced silently provided they
appear between single-quotes like in `crt'.
With a prefix arg will prompt for continuation with every new pair."
  (interactive "bBuffer containing replace spec: \nP")
  (tags-multiple-query-replace-loop buffer 'satherk-silent-replace-fn ARG))

(defun regular-query-replace-fn (from to)
  (and (save-excursion (re-search-forward from nil t))
       ;; replace all in current file, cf. replace.el 
       (not (perform-replace from to t t nil))))

(defun satherk-silent-replace-fn (from to)
  (switch-to-buffer (current-buffer))
  (while (s-search-forward-symbol from)
    (delete-region (point) (- (point) (length from)))
    (insert to)))

(defun tags-multiple-query-replace-loop (buffer replace-fn &optional prompt)
  (let (from to error)
    (save-excursion 
      (set-buffer buffer)
      (beginning-of-buffer)
      (while (not (eobp))
	(setq from (read (current-buffer))
	      to (read (current-buffer)))
	(skip-chars-forward " \t\n")
	(if (and error prompt (not (yes-or-no-p 
				 (format "Continue replacing %s by %s? "
					 from to))))
	    (error "Multiple replacement aborted."))
	;; new pair
	(setq tags-loop-form (list replace-fn from to))
	(condition-case what 
	    (tags-loop-continue t)
	  (error			; what is bound  to the error
	   (setq error what)))
	(set-buffer buffer))))
  (save-some-buffers))

;;;- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
;;; TAGS COMPLETION

(defvar tags-completion-obarray nil)
(defvar tags-class-parent-list nil)
(defvar tags-class-definition-list nil)

;; make sure we get a 'position function, don't want to load cl.
(defun s-position (elt vector)
  (let (found (i 0) (len (length vector)))
    (while (and (not found) (< i len))
      (setq found (if (eq (elt vector i) elt) t)
	    i (1+ i)))
    (if found i)))
(if (not (fboundp 'position)) (fset 'position (symbol-function 's-position)))

(defun satherk-tag-p (tag) (position tag tags-completion-obarray))
(defun satherk-class-tag-p (tag) (and (position tag tags-completion-obarray)
				     (classp (symbol-name tag))))
  
(defun satherk-complete-symbol ()
  "Perform completion on Satherk symbol preceding point.
That symbol is compared against the symbols from the current Satherk tags
table and any additional characters determined by what is there
are inserted."				
  ;;locals upto is? No point and click, they are close.
  (interactive)
  (require-satherk-tags-completion)
  (let* ((end (point))
	 (beg (save-excursion
		(backward-sexp 1)
		(point)))
	 (pattern (buffer-substring beg end))
	 (sobarray tags-completion-obarray)
	 (predicate (function satherk-tag-p))		;why is this necessary?
	 (completion (try-completion pattern sobarray predicate)))
    (cond ((eq completion t))
	  ((null completion)
	   (message "Can't find completion for \"%s\"" pattern)
	   (ding))
	  ((not (string= pattern completion))
	   (delete-region beg end)
	   (insert completion))
	  (t
	   (message "Making completion list...")
	   (let ((list (all-completions pattern sobarray predicate)))
	     (with-output-to-temp-buffer "*Tags Completion*"
	       (display-completion-list list)
	       ;; make is sensitive to Satherk commands
	       (set-buffer (get-buffer "*Tags Completion*"))
	       (satherk-mode)
	       ))
	   (message "Making completion list...%s" "done")))))

;;; Make sure the completion array is already computed.
;;; Save it, so we spend time once only. Also make sure
;;; we recognize when the file is recomputed.
;;; While satherk-apropos looks for all matches and prints them with class qualifier,
;;; in-buffer completion of qualified name can simply complete class name and then
;;; feature name. Also due to inheritance other combinations than the ones
;;; of origin of def would be relevant in general. So we put in unqualified names
;;; only.

(defun require-satherk-tags-completion ()	
  "Check whether tags completion info is available. If necessary compute it."
  (require-satherk-tags)
  (let (symbols attributes sym name classdef class parents defs classp)
    (if (not tags-completion-obarray)
	(save-excursion
	  (visit-tags-table-buffer)
	  (setq tags-class-parent-list nil
		tags-class-definition-list nil)
	  (beginning-of-buffer)
	  (while (< (point) (point-max))
	    (cond ((looking-at "") (beginning-of-line 3))
		  ((looking-at "^[ \t]*class ")
		   (forward-word 1)
		   (cond (class		; save previously collected def if any
			  (push (cons class parents) tags-class-parent-list)
				(push (cons class defs) tags-class-definition-list)))
		   (setq classdef t	;; next round we know class starts
			 class nil parents nil defs nil attributes nil))
		  ;; skip keywords
		  ((looking-at "[ \t]*\\(private\\|shared\\|readonly\\|const\\)[ \t]")
		   (forward-word 1))
		  (t (skip-chars-forward " \t")
		     (let ((begin (point)) done)
		       (while (not done)
			 (re-search-forward "[:,=;({ \t\177]")
			 (backward-char 1) ; skip char found
			 ;; there may be white space
			 (skip-chars-backward " \t")
			 (cond ((not (= begin (point)))
				(setq name (buffer-substring begin (point))
				      sym (intern name)
				      classp (classp name))
				(if (not (memq sym symbols)) (push sym symbols))
				(cond (classdef (setq classdef nil class sym))
				      (classp (push (list sym) defs)
					      (push sym parents))
				      (t (push sym defs)))))
			 (skip-chars-forward " \t")
			 (cond ((looking-at "\177") (setq done t))
			       (t (forward-char 1) 
				  (skip-chars-forward " \t")
				  (setq begin (point))))))
		     (beginning-of-line 2))))
	  (cond (class
		 (push (cons class parents) tags-class-parent-list)
		 (push (cons class defs) tags-class-definition-list)))
	  (setq symbols (sort symbols (function string-lessp)))
	  (setq tags-completion-obarray  (apply 'vector symbols))))))

;;;- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
;;; SATHERK TAGS CREATION (setq tags-file-name nil) (setq tags-completion-array nil)
 
;; redefine to visit-tags-table to reset our completion info
(defun visit-tags-table (file)
  "Tell tags commands to use tag table file FILE.
FILE should be the name of a file created with the `etags' program.
A directory name is ok too; it means file TAGS in that directory."
  (interactive (list (read-file-name "Visit tags table (Default TAGS): "
				     default-directory
				     (concat default-directory "TAGS")
				     t)))
  (setq file (expand-file-name file))	;already substituted
  (if (file-directory-p file) (setq file (concat file "TAGS")))
  (setq tag-table-files nil
	tags-file-name file
	tags-completion-obarray nil)
  (let ((compl-file (expand-file-name "TAGS.compl" (file-name-directory file))))
    (if (file-exists-p compl-file) 
	(let ((hilit-auto-highlight-maxout 0))
	  (load compl-file)))))

(defun require-satherk-tags ()
  "If there is no current tags table, find or create one."
  (let* ((fn (expand-file-name "TAGS" default-directory)))
    (cond (tags-file-name t)
	  ((and (file-exists-p fn)
		(y-or-n-p (format "Visit tags table %s? " fn)))
	   (visit-tags-table fn))
	  ((and (file-exists-p ".satherk")
		(y-or-n-p (format "%s Satherk TAGS from .satherk? "
				  (if (file-exists-p "TAGS") "Overwrite "
				    "No TAGS file. Create "))))
	   (save-excursion (satherk-tags ".sather")))
	  (t 
	   (let ((file (read-file-name "Visit tags table (Default TAGS): "
				     default-directory
				     (concat default-directory "TAGS")
				     t)))
	     (visit-tags-table file))))))

(defun satherk-tags (&optional dot-satherk) 
  "Produces a Satherk tags table from the .sather file (by default the
.satherk file at the current directory) and visits it.  The tags file
is named TAGS and saved under the current directory.  All files found
under the '(source-files)' option of the .sather file are considered,
not following '(include)' options. The system's satherk file called
sys_dot_sather is either defined in the .sather file (sather_k_home), by
the user variable satherk-home-directory or the environment variable
SATHER_K_HOME -- in that order. In the distribution .emacs the
satherk-home-directory is typically initialized by the value of
SATHER_K_HOME, if this is defined by the user, or to the installation
directory.

The TAGS file can be used with all commands of the Emacs tags facility
but also there are specific satherk commands, cf. the mode
documentation (\\[describe-mode]) for more information.

The TAGS file includes only top-level definitions, i.e. classes, there
features heads and their parents. The efficiency and simplicity of its
production rely on the use of egrep with properly indented Satherk
source files. We egrep all lines with identifiers anchored to the left
or following upto three spaces(!).  The Satherk mode's understanding of
top-level features can be modified by the user variables
satherk-top-level-egrep-pattern and satherk-top-level-re-pattern."
  
  (interactive)
  (let* ((comment-start "--")
	 (old-tags-buffer (get-buffer "TAGS"))
	 (old-tags-buffer1 (get-buffer "*Satherk Tags*"))
	 (dir default-directory)
	 (fn (expand-file-name "TAGS" dir))
	 (cfn (expand-file-name "TAGS.compl" dir))
	 (hilit-auto-highlight-maxout 0)	; avoid highlighting 
	 files)
    (if old-tags-buffer (kill-buffer old-tags-buffer))
    (if old-tags-buffer1 (kill-buffer old-tags-buffer1))
    ;; prompt if argument missing
    (setq dot-satherk (or dot-satherk 
			 (read-file-name "TAGS for file (Default: .sather): "
				     default-directory
				     (concat default-directory ".sather")
				     t)))
    (let* ((dot-satherk (expand-file-name dot-satherk))
	   (dot-satherk-home (dot-satherk-satherk-home dot-satherk))
	   (satherk-home-directory ;; let .sather file overwrite
	    (if (and (stringp dot-satherk-home) (> (length dot-satherk-home) 0))
		(s-expand-file-name dot-satherk-home
				    (file-name-directory dot-satherk))
;;	      satherk-home-directory))
	      "///"))
	   (sys-dot-satherk
	    (if dot-satherk-home
		(expand-file-name "sys/sys_dot_sather" satherk-home-directory))))
      (setq files 
	    (append (if dot-satherk-home (dot-satherk-source-files sys-dot-satherk))
		    (dot-satherk-source-files dot-satherk)))
      (save-window-excursion
	(set-buffer (get-buffer-create "*Satherk Tags*"))
	(delete-region (point-min) (point-max))
	;; tag them in packages of N, but make sure that we always got 2
	;; the shell-command seems to blow up when its string representation
	;; is lengthy
	(let ((pack 20) next-files files-text done len)
	  (setq len (length files))
	  (while (not done)
	    (cond ((<= len pack) (setq next-files (reverse files) files nil done t))
		  ;; make sure at least 2 of them, egrep doesn't give filenames
		  ;; otherwise
		  ((= len (1+ pack)) (setq next-files 
					   (list (cadr files)
						 (car files))
					   files (cddr files)))
		  (t;; where is subseq?
		   (setq next-files nil)
		   (dotimes (i pack)	; make a ten pack
			    (push (car files) next-files)
			    (setq files (cdr files)))))
	    (setq files-text (mapconcat 'identity next-files " "))
	    (message "Scanning %s files. %s files left."
		     (length next-files) (setq len (length files)))
	    (shell-command
	     (format "egrep -n %s %s" satherk-top-level-egrep-pattern files-text)
	     t)
	    ))
	(trim-satherk-tags dir)
	(write-file fn))
      (if (file-exists-p cfn) (delete-file cfn)) ;avoid visiting old completion info
      (visit-tags-table fn)
      (setq tags-completion-obarray nil)
      (message "Computing inheritance lookup tables ...")
      (save-excursion
	(require-satherk-tags-completion))
      (message "Saving inheritance lookup tables ...")
      (save-excursion
	(set-buffer (get-buffer-create "*Satherk Tags Completion*"))
	(delete-region (point-min) (point-max))
	(insert (format "(setq tags-class-parent-list\n   '%s)\n\n" 
			tags-class-parent-list))
        (insert (format "(setq tags-class-definition-list\n    '%s)\n\n" 
			tags-class-definition-list))
	(insert (format "(setq tags-completion-obarray\n  (apply 'vector '%s))\n"
			(mapcar 'identity tags-completion-obarray)))
	(write-file cfn))
      )))

(defun search-dot-satherk-option (option-string)
  "Find .satherk option like `(source_files)'. Points ends up behind."
  (beginning-of-buffer)
  (satherk-mode)
  (let (done)
    (while (not (or done (not (search-forward option-string nil t))))
      (if (not (in-comment-p (1- (point)))) (setq done t)))
    done))


;;; .satherk (sather_k_home) precedes sahter-home-directory precedes SATHER_K_HOME var.
;;; Note that satherk/etc/.emacs or user's .emacs for that matter can use
;;; therefore (defvar satherk-home-directory (or (getenv "SATHER_K_HOME") "somepath"))
;;; to shadow the installation path.
(defun dot-satherk-satherk-home (file)
  (let (dir)
    (save-excursion 
      (find-file file)
      (cond ((search-dot-satherk-option "(sather_k_home)")
	     (skip-layout) 
	     (buffer-substring (point)
			       (progn (skip-chars-forward "^ \t\n")
				      (point))))
	    (t ; otherwise understand the setup of the distribution
	     (or (and (boundp 'satherk-home-directory)
		      satherk-home-directory)
		 (getenv "SATHER_K_HOME")))
	     nil))))

;;TEST: (dot-satherk-satherk-home "/usr/local/src/satherk/etc/test/.satherk")
;; (dot-satherk-satherk-home "~bilmes/satherk/debugger/.satherk")
;; (dot-satherk-satherk-home "~/satherk/ui/.satherk")


(defun dot-satherk-source-files (file)
  (let (files done (directory (file-name-directory file)))
    (save-excursion
      (find-file file)
      (or 
       (not (search-dot-satherk-option "SOURCE_FILES are"))
       (while (not done)
	 (skip-layout)
	 ;; in front of a pathname or end?
	 (cond ((or (looking-at "end") (eobp));; other option or end
		(setq done t))
	       (t 
		(push (s-expand-file-name	; allow ~, ., .., $ in pathnames
		       (buffer-substring (point)
					 (progn (skip-chars-forward "^ \t\n")
						(point)))
		       directory)
		      files)))))
      (or 
       (not (search-dot-satherk-option "(source_files)"))
       (while (not done)
	 (skip-layout)
	 ;; in front of a pathname or end?
	 (cond ((or (looking-at "(") (eobp));; other option or end
		(setq done t))
	       (t 
		(push (s-expand-file-name	; allow ~, ., .., $ in pathnames
		       (buffer-substring (point)
					 (progn (skip-chars-forward "^ \t\n")
						(point)))
		       directory)
		      files)))))
      files)))

;;; The expansion of $SATHER_K_HOME by cs may work differently.
;;; This variable is treated in a special way. Perhaps the user can
;;; simply set-variable satherk-home-directory to achieve this effect.
;;; Note that expand-file-name does not treat ../ properly when leading in filename.
(defun s-expand-file-name (fname &optional dir)
  (if (equal (substring fname 0 2) "..")
      (expand-file-name (concat dir (substitute-in-file-name fname)))
    (expand-file-name (substitute-in-file-name fname) dir)))

;;; TEST: (s-expand-file-name "$SATHER_K_HOME/foo/bar.sa")
;;; TEST: (s-expand-file-name "$ZIPPY_HOME/foo/bar.sa")
;;; TEST: (substitute-in-file-name "$ZIPPY_HOME/foo/bar.sa")

;;; TEST: (dot-satherk-source-files "/usr/local/src/satherk/etc/test/.satherk")
;;; TEST: (dot-satherk-source-files "~bilmes/satherk/debugger/.satherk")

(defun trim-satherk-tags (pwd)  
  "Produces an Emacs TAGS table from the output of egrep.
Currently we assume that egrep was run on at least two files, i.e. file
names must be present."
  (interactive)
  (let (curr-file curr-file-buf
		  (curr-buf (current-buffer))
		  file fbeg nobeg noend lno)
    (beginning-of-buffer)
    (setq curr-file
	  (buffer-substring (point) (1- (save-excursion (search-forward ":") (point)))))
    (insert (format "\n%s,\n" curr-file))
    (save-excursion (find-file (concat pwd "/" curr-file))
		    (setq curr-file-buf (current-buffer)))
    (message "Computing indexes into %s" curr-file)
    (while (and (setq fbeg (point))
		(setq nobeg (and (search-forward ":" nil t) (point)))
		(setq noend (and (search-forward ":" nil t) (point))))
      (cond ((or (looking-at " No such file") ; yup, can happen
		 (looking-at " Not a directory") 
		 (looking-at		; widow keywords and end's
		  "\\(   \\|  \\| \\|\\)\\(end\\|shared\\|readonly\\|const\\|private\\)[ \t]*[;\n-]")
		 (looking-at		; widow keywords and end's
		  "\\(   \\|  \\| \\|\\)except[ \t]*"))
	     (delete-region fbeg
			    (save-excursion (end-of-line) 
					    (if (looking-at "\n")
						(forward-char 1))
					    (point))))
	    (t 
	     (setq file (buffer-substring fbeg (1- nobeg))
		   lno (buffer-substring nobeg (1- noend)))
	     (delete-region fbeg noend)
	     (cond ((not (string-equal curr-file file))
		    (setq curr-file file)
		    (message "Computing indexes into %s" file)
		    (save-excursion (find-file (concat pwd "/" curr-file))
				    (setq curr-file-buf (current-buffer)))
		    (let ((p (point)))
		      (save-excursion (search-backward "") ;is there
				      (end-of-line 2)
				      (insert (format "%d" (1- (- p (point)))))))
		    (insert (format "\n%s,\n" curr-file))))
	     (trim-stags-line curr-file-buf lno))))
    (let ((p (point)))
      (save-excursion (search-backward "") ;is there
		      (end-of-line 2)
		      (insert (format "%d" (1- (- p (point)))))))
    ))

(defun trim-stags-line (&optional curr-file-buf lno)
  (interactive)
  ;; We are at the beginning of a line. Some constructs are lists that
  ;; continue with "defining" identifiers in subsequent lines.
  ;; egrep just collects the start.  Attribute declarations for instance
  ;; are separated by comma. If the language-line ends with a comma we note it.
  (switch-to-buffer (current-buffer))
  (let* (bol eol multi-def-cont-p next-line 
	     (next t)
	     (file-lno (car (read-from-string lno))) ; source line no
	     (last-file-lno file-lno)	; initially the same
	     (file-chno (save-excursion (set-buffer curr-file-buf) ; source point
					(goto-line file-lno) (point))))
    ;; at least one, may many defs in multi-line list
    (while next
      ;; assumes we are at beginning of line (filestuff stripped off)
      ;; so line should look like source line.
      (setq eol (save-excursion (end-of-language-line) (point)) bol (point))
      ;; don't go into feature body; also avoid nesting levels
      ;; at least parm types must be listed vertically.
      (save-excursion
	(if (re-search-forward "\\([({:]\\|[ \t]is[ \t]\\)" eol t)
	    (setq eol (min eol (point)))))
      ;; does this look like a line that has a continuation?
      (setq multi-def-cont-p 
	    (and (not (re-search-forward "(" eol t));; unless in routine signature
		 (progn (goto-char (1- eol)) (looking-at ","))))
      ;; go to from where we cut-to-end-of-line
      (goto-char eol)
      (if (cond ((re-search-backward "(" bol t) ;; catch function 
		 (goto-char bol) (re-search-forward "(" bol t) (backward-char 1))
		((re-search-backward ":.*:=" bol t)) ; attribute def with init expr
		;; last attr with type or alias
		((re-search-backward "[:=]" bol t))
		;; or last elem in list, try only after(!) looking for = (foo = bar, ba = bu,)
		((re-search-backward "," bol t)))
	  ;; in backward search skip
	  (skip-layout-backward)
	(progn ;; give up multi defs in one line and find first
	  (goto-char bol)
	  (if (re-search-forward "[ \t]*\\([=,:;({]\\|[ \t]+is[ \t\n]\\)" (1+ eol) t)
	      (goto-char (match-beginning 0))
	    ;; what now? take whole line
	    (goto-char (1- eol)))))
      (forward-char 1);; delete to real eol (incl. lament, bol does not)
      (delete-region (point) (save-excursion (end-of-line) (point)))
      ;; get source char number 
      (save-excursion (set-buffer curr-file-buf)
		      (goto-line file-lno)
		      (setq file-chno (point)))
      (end-of-line) 
      (insert (format "\177%s,%d" file-lno file-chno))
      (forward-char 1);; beginning of next line
      (setq next multi-def-cont-p);; continue if there is a subsequent def line
      (cond (multi-def-cont-p;; keep treating successor line the same way
	     ;; insert line and find whether it has a successor too
	     (save-excursion 
	       (set-buffer curr-file-buf)
	       ;; at beginning of the line we did
	       (beginning-of-line 2)
	       (skip-layout);; don't include lament (layout and comment)
	       (beginning-of-line 1)
	       (setq file-chno (point)
		     next-line (buffer-substring file-chno
						 (save-excursion
						   (beginning-of-line 2)
						   (point)))
		     last-file-lno file-lno)
	       (goto-line file-lno);; we were at goal (file-chno) but must account for lament
	       (while (< (point) file-chno)
		 (beginning-of-line 2) (setq file-lno (1+ file-lno))))
	     (insert next-line)
	     (if next (beginning-of-line 0)))))))


;;; ************************************************************************
;;;
;;; add Sather-K smart mode for Hyperbole
;;; this is based on Bill Di Benedetto's smart Fortran mode
;;; see also <(mail)>
;;; ************************************************************************

;(defun smart-satherk (&optional next)
;  "Jumps to the first occurrence of selected Sather-Kk construct in current
;routine.
;Optional NEXT means jump to second occurrence.

;It assumes that its caller has already checked that the key was pressed in an
;appropriate buffer and has moved the cursor to the selected buffer.

;If key is pressed:
; (1) on a Satherk identifier, the identifier definition is displayed,
;     assuming the identifier is found within an 'etags' generated tag file
;     in the current directory or any of its ancestor directories;
; (2) on a Satherk identifier, the first occurence of identifier is displayed,
;     assuming the the first occurence would be the definition."

;  (interactive)
;  (or
;   (let ((tag (smart-satherk-name-p))
;	 (tagfound nil)
;	 (case-fold-search t)
;	 (here (point))
;         (thisbuffer (current-buffer))
;	 (stop nil)
;	 (tags-file-name (smart-tags-file buffer-file-name))
;	 (valid-chars "a-zA-Z0-9_"))
;     (message "Looking for '%s' in '%s'..." tag tags-file-name)
;     (condition-case junk
;	 (progn
;	   (funcall (if (and (fboundp 'br-in-browser) (br-in-browser))
;			'find-tag 'find-tag-other-window)
;		    tag next)
;	   (message "Found definition for '%s'." tag))
;       (error
;        (message "")
;	(switch-to-buffer-other-window thisbuffer)
;        (goto-char here)
;        (beginning-of-satherk-class)
;	(while (and (not stop) (search-forward tag nil t))
;	  (save-excursion
;	    (and (progn
;		   (setq tagfound (smart-satherk-name-p))
;		   (if (string= tag tagfound)
;		       (if next
;			   (progn (setq next nil) nil)
;			 t)
;		     nil))
;		 (progn
;		   (beginning-of-line)
;		   (if (not (looking-at comment-line-start-skip))
;		       (setq stop t))))))))
;     (skip-chars-backward valid-chars))))

	     
;;; ************************************************************************
;;; This was lifted straight from
;;; fortran.el by Michael D. Prange <prange@erl.mit.edu>
;;;
;;; I include it here for those who might not have fortran.el.
;;; ************************************************************************

(defun beginning-of-satherk-class ()
  "Moves point to the beginning of the current Satherk subprogram."
  (interactive)
  (let ((case-fold-search t))
    (beginning-of-line -1)
    (re-search-backward satherk-top-level-re-pattern nil 'move)
;    (if (s-top-level-p)
;	(forward-line 1)
)))

(defun smart-satherk-name-p ()
  "Return the variable/routine that point is within, else nil."
   (let* ((valid-chars "a-zA-Z0-9_")
	  (reasonable (concat "[a-zA-Z][" valid-chars "]*"))
	  (identifier))
     (save-excursion
       (skip-chars-backward valid-chars)
       (if (looking-at reasonable)
	   (progn
	     (setq identifier
		   (buffer-substring (point) (match-end 0))))
	 nil))))
	 

(defalias 'smart-satherk 'satherk-tag-at-point)

(setq smart-key-alist
      (cons '((eq major-mode 'satherk-mode) . ((smart-satherk nil nil) . (smart-satherk-meta)))
	    smart-key-alist))

(if (boundp 'smart-key-mouse-alist)
    (setq smart-key-mouse-alist
	  (cons '((eq major-mode 'satherk-mode) . ((smart-satherk nil nil) . (smart-satherk-meta)))
		smart-key-mouse-alist)))

(provide 'satherk-tags)

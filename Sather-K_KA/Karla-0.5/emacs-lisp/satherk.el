;; satherk-mode.el -- Emacs mode for editing Sather-K programs.
;;
;; Author: Gerhard Goos <ggoos@ira.uka.de>
;; a modification of sather-mode.el for Sather 1.0 written by
;; Stephen M. Omohundro <om@icsi.berkeley.edu>
;; Copyright (C) International Computer Science Institute, 1990
;; $Id: .sather-mode.el,v 1.10 1993/08/03 01:01:30 om Exp $
;;
;; COPYRIGHT NOTICE: This code is provided WITHOUT ANY WARRANTY
;; and is subject to the terms of the SATHER LIBRARY GENERAL PUBLIC
;; LICENSE contained in the file: sather/doc/license.txt of the
;; Sather distribution. The license is also available from ICSI,
;; 1947 Center St., Suite 600, Berkeley CA 94704, USA.
;;-----------------------------------------------------------------
;; Major mode for editing Sather programs. (based on earlier Eiffel mode 
;; including modifications made by Bob Weiner of Motorola.)
;; The following two statements, placed in a .emacs file or site-init.el,
;; will cause this file to be autoloaded, and satherk-mode invoked, when
;; visiting .sa files:
;;
;;	(autoload 'satherk-mode "satherk.el" "Sather mode" t nil)
;;      (setq auto-mode-alist
;;            (append
;;              (list (cons "\\.sa$" 'satherk-mode))
;;              auto-mode-alist))
;;-----------------------------------------------------------------
;;; HISTORY:
;;;  * Last edited: Jul  7 10:18 1994 (frick)
;;;  *  Jul  7 10:17 1994 (frick): changed ordering of highlight patterns: keywords in comments no longer lead to confusion
;;;  *  Jun 21 16:42 1994 (frick): added variables satherk-top-level-egrep-pattern and satherk-top-level-re-pattern
;;;  *  May 31 13:27 1994 (frick): enhanced indentation and highlighting,
;;;	   currently breaks if indentation-changing keyword
;;;        is found within a string; otherwise, it's pretty useful!
;;;				  
  
(defun satherk-which-class (&optional no-msg)
  "Returns the class name of the class preceding point, if any.
With prefix argument 0, also print the name of the current feature if applicable.
When called from program and the first argument NO-MSG = t, suppress display."
  (interactive "P")
  (let (name)
    (save-excursion
      (cond ((beginning-of-class t)
	     (forward-word 1) (skip-layout)
	     (setq name 
		   (buffer-substring (point) (save-excursion (forward-sexp) (point)))))))
    ;; display if not one
    (if (not (eq no-msg t))	
	(cond ((and no-msg (zerop no-msg))
	       (let ((fname (save-excursion (beginning-of-feature)
					    (buffer-substring (point) 
							      (progn (end-of-line) (point))))))
		 (message (format "Class: %s, Feature: %s" name fname))))
	      (name (message (format "Class: %s" name)))
	      (t (error "No class preceding point."))))
    name))

;;;- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
;;; If we do not know where we are anchors are top-level keywords.

(defun beginning-of-class (&optional no-error)
  "Position to the class begin preceding point. Returns t if class was 
found, otherwise an error is signalled. If the optional argument
NO-ERROR is t, the function returns nil if no class is found."
  (interactive)
  (cond ((re-search-backward "^[ \t]*(abstract[ \t]+){0,1}(value|external)[ \t]+){0,1}class[ \t\n]" nil t)
	 (beginning-of-line) (skip-layout) t)
	(no-error nil)
	(t (error "No class preceding point."))))



(defvar satherk-mode-map nil 
  "Keymap for Sather-K mode.")

(defvar satherk-top-level-egrep-pattern "'^[ \t]*(abstract[ \t]+){0,1}(value|external)[ \t]+){0,1}class[ \t\n]+[A-Z]|( |  |   )([a-z]|[A-Z]))'"
  "* The egrep pattern for recognizing whether a Sather-K line is top-level,
i.e. one of the starting lines of a class or feature definition.")

(defvar satherk-top-level-re-pattern "\\(^\\|^ \\|^  \\|^   \\)[a-zA-Z]"
  "* The re pattern for recognizing whether a Sather-K line is top-level,
i.e. one of the starting lines of a class or feature definition.")

(defun s-top-level-p ()
  "t if current-line is likely the beginning or end of a Sather-K definition."
  (save-excursion
    (beginning-of-line)
    (looking-at satherk-top-level-re-pattern)))

;;;- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

(if satherk-mode-map ()
  (let ((map (make-sparse-keymap)))
    (define-key map "\C-cc" 'satherk-class)
    (define-key map "\t" 'satherk-indent-line)
    (define-key map [C-tab] 'satherk-indent-line)
    (define-key map "\r" 'satherk-return)
    (define-key map "\177" 'backward-delete-char-untabify)
    (define-key map "\M-;" 'satherk-comment)
    (setq satherk-mode-map map))
)

(defvar satherk-mode-syntax-table nil
  "Syntax table in use in Sather-K-mode buffers.")

(if satherk-mode-syntax-table
    ()
  (let ((table (make-syntax-table)))
    (modify-syntax-entry ?\\ "\\" table)
    (modify-syntax-entry ?/ ". 14" table)
    (modify-syntax-entry ?* ". 23" table)
    (modify-syntax-entry ?+ "." table)
    (modify-syntax-entry ?- "." table)
    (modify-syntax-entry ?= "." table)
    (modify-syntax-entry ?% "." table)
    (modify-syntax-entry ?< "." table)
    (modify-syntax-entry ?> "." table)
    (modify-syntax-entry ?& "." table)
    (modify-syntax-entry ?| "." table)
    (modify-syntax-entry ?\' "\"" table)
    (setq satherk-mode-syntax-table table)))

(defconst satherk-indent 3
  "*This variable gives the indentation in Satherk-mode")

(defconst satherk-comment-col 32
  "*This variable gives the desired comment column for comments to the right
of text.")

(defvar satherk-site "@ira.uka.de"
  "*Mailing address of site where mode is being used. Should include
initial \@ sign. Use nil for none.")

(defvar satherk-short-copyright 
"-- Copyright (C) 1993, Universitaet Karlsruhe\n"
"*Short copyright notice to be inserted in the header. Should be commented
and include trailing newline. Use nil for none.")

(defvar satherk-long-copyright 
"-- COPYRIGHT(c) Universitaet Karlsruhe, Karlsruhe, Deutschland
-- Dieser Code wird ohne jede Gewaehrleistung zur Verfuegung gestellt.
-- Modifikation und Weiterverbreitung ist erlaubt, soweit diese
-- Copyright-Notiz unveraendert mit verbreitet wird und in Dokumentationen
-- und Veroeffentlichungen die Original-Autoren der verwendeten
-- Sather-Klassen genannt werden.\n"
;;COPYRIGHT NOTICE: This code is provided WITHOUT ANY WARRANTY
;;-- and is subject to the terms of the SATHER LIBRARY GENERAL PUBLIC
;;-- LICENSE contained in the file: sather/doc/license.txt of the
;;-- Sather distribution. The license is also available from ICSI,
;;-- 1947 Center St., Suite 600, Berkeley CA 94704, USA.\n"
"*Long copyright notice to be inserted in the header. Should be commented
and have trailing newlines. Use nil for none.")

(defun satherk-mode ()
  "A major editing mode for the language Sather-K.
Comments are begun with --.
Paragraphs are separated by blank lines
Delete converts tabs to spaces as it moves back.
Tab anywhere on a line indents it according to Sather-K conventions.
M-; inserts and indents a comment on the line, or indents an existing
comment if there is one.
Return indents to the expected indentation for the new line. A class 
skeleton is inserted (along with a file header if neccessary) with:

 C-c c class

Variables controlling style:
   satherk-indent          Indentation of Sather-K statements.
   satherk-comment-col     Goal column for inline comments.
   satherk-site            Mailing address of site for header.
   satherk-short-copyright Short copyright message for header.
   satherk-long-copyright  Long copyright message for header.

Turning on Sather-K mode calls the value of the variable satherk-mode-hook with
no args, if that value is non-nil."
  (interactive)
  (kill-all-local-variables)
  (use-local-map satherk-mode-map)
  (setq major-mode 'satherk-mode)
  (setq mode-name "Sather-K")
  (set-syntax-table satherk-mode-syntax-table)
  (make-local-variable 'indent-line-function)
  (setq indent-line-function 'satherk-indent-line)
  (make-local-variable 'comment-start-skip)
  (setq comment-start-skip "--+[ \t]*")
  (make-local-variable 'comment-start)
  (setq comment-start "--")
  (make-local-variable 'paragraph-start)
  (setq paragraph-start (concat "^$\\|" page-delimiter))
  (make-local-variable 'paragraph-separate)
  (setq paragraph-separate paragraph-start)
  (make-local-variable 'paragraph-ignore-fill-prefix)
  (setq paragraph-ignore-fill-prefix t)
  (make-local-variable 'require-final-newline)
  (setq require-final-newline t)
  (run-hooks 'satherk-mode-hook))

(defun satherk-header ()
  "Insert the file header at point."
  (let ((header (read-string "File header: " 
			     (concat "-- " (buffer-name) ": "))))
    (insert header "\n"
	    "--\n"
	    "-- Author: " (user-full-name) " <" (user-login-name) 
	       satherk-site ">\n"
	    satherk-short-copyright "-- $\Id$\n--\n" satherk-long-copyright 
"-------------------------------------------------------------------\n"
"-- \n"
"-------------------------------------------------------------------\n"
)))   

(defun satherk-class ()
  "Insert a 'class' template."
  (interactive)
  (if (not (s-empty-line-p))
      (progn (end-of-line)(newline)))
  (beginning-of-line)
  (if (s-prev-class-p) nil (satherk-header))
  (let ((cname (read-string "Class: ")))
    (insert 
     "class " (upcase cname) " is\n\n"
     "end; -- class " (upcase cname) "\n\n"
     "-------------------------------------------------------------------\n")
    )
  (re-search-backward "\nend")
  (satherk-indent-line))

(defun s-prev-class-p ()
  "True if there is a class definition before this one."
  (interactive)
  (save-excursion
    (re-search-backward 
     "^[ \t]*\\(abstract[ \t]+\\){0,1}\\(value\\|external\\)[ \t]+){0,1}class" nil t)))



(defun satherk-return ()
  "Return and Sather-K indent the new line."
  (interactive)
  (newline)
  (satherk-indent-line))

(defun satherk-indent-line ()
  "Indent the current line as Sather-K code."
  (interactive)
  (save-excursion
    (beginning-of-line)
    (delete-horizontal-space)
    (indent-to (s-calc-indent)))
  (skip-chars-forward " \t"))

;; A line is one of the following:
;;    blank 
;;    just a comment
;;    block-cont: starts with end, elsif, else, when, then, against
;;    block-head: ends with is, or starts with if, loop, case, typecase,
;;                assert, or begin.
;;    none of the above

(defun s-calc-indent ()
  "Return the appropriate indentation for this line as an int."
  (cond 
   ((s-empty-line-p)			;an empty line 
    (+ satherk-indent (s-get-block-indent))) ;go in one from block
   ((s-comment-line-p)             ;a comment line
    (s-comment-indent))
   ((s-starts-with-class-p) 0)
   ((s-starts-with-pre-p) (* 2 satherk-indent))
   ((s-starts-with-inheritance-p) satherk-indent)
   ((s-ends-with-is-p) satherk-indent)
   ((s-block-cont-p)               ;begins with block-cont keyword
    (s-get-block-indent))          ;indent same as block
   (t                              ;block-head or something else
    (+ satherk-indent (s-get-block-indent))))) ;go one in from block

(defun s-starts-with-class-p ()
  "True if line starts with value class, abstract class, external class or\
class."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*\\(abstract[ \t]+\\){0,1}\\(value\\|external\\)[ \t]+){0,1}class")))



(defun s-starts-with-pre-p ()
  "True if line starts with either pre or post."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*\\(pre\\|post\\)[ \t\n]")))

(defun satherk-comment ()
  "Edit a comment on the line. If one exists, reindents it and moves to it, 
otherwise creates one. Gets rid of trailing blanks, puts one space between
comment header comment text, leaves point at front of comment. If comment is
alone on a line it reindents relative to surrounding text. If it is before
any code, it is put at the line beginning.  Uses the variable 
satherk-comment-col to set goal start on lines after text."
  (interactive)
  (cond ((s-comment-line-p)             ;just a comment on the line
         (beginning-of-line)
         (delete-horizontal-space)
         (indent-to (s-comment-indent))
         (forward-char 2)(delete-horizontal-space)(insert " "))
        ((s-comment-on-line-p)          ;comment already at end of line
         (cond ((s-ends-with-end-p)     ;end comments come immediately
                (s-goto-comment-beg)(delete-horizontal-space)(insert " ")
                (forward-char 2)(delete-horizontal-space)(insert " "))
               (t
                (s-goto-comment-beg)(delete-horizontal-space)
                (if (< (current-column) satherk-comment-col)
                    (indent-to satherk-comment-col)
                  (insert " "))
                (forward-char 2)
		(delete-horizontal-space)
		(insert " "))))
        ((s-empty-line-p)               ;put just a comment on line
         (beginning-of-line)
         (delete-horizontal-space)
         (indent-to (s-comment-indent))
         (insert "-- "))
        ((s-ends-with-end-p)            ;end comments come immediately
         (end-of-line)(delete-horizontal-space)(insert " -- "))
        (t                              ;put comment at end of line
         (end-of-line)
         (delete-horizontal-space)
         (if (< (current-column) satherk-comment-col)
             (indent-to satherk-comment-col)
           (insert " "))
         (insert "-- "))))

(defun s-ends-with-end-p ()
  "t if line ends with 'end' or 'end;' and a comment."
  (save-excursion
    (beginning-of-line)
    (looking-at "^\\(.*[ \t]+\\)?end;?[ \t]*\\($\\|--\\)")))

(defun s-empty-line-p ()
  "True if current line is empty."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*$")))

(defun s-comment-line-p ()
  "t if current line is just a comment."
  (save-excursion
    (beginning-of-line)
    (skip-chars-forward " \t")
    (looking-at "--")))

(defun s-comment-on-line-p ()
  "t if current line contains a comment."
  (save-excursion
    (beginning-of-line)
    (looking-at "[^\n]*--")))

(defun s-in-comment-p ()
  "t if point is in a comment."
  (save-excursion
    (and (/= (point) (point-max)) (forward-char 1))
    (search-backward "--" (save-excursion (beginning-of-line) (point)) t)))

(defun s-current-indentation ()
  "Returns current line indentation."
  (save-excursion
    (beginning-of-line)
    (skip-chars-forward " \t")
    (current-indentation)))

(defun s-goto-comment-beg ()
  "Point to beginning of comment on line.  Assumes line contains a comment."
  (beginning-of-line)
  (search-forward "--" nil t)
  (backward-char 2))

(defun s-block-cont-p ()
  "t if line continues the indentation of enclosing block. Begins with end,
elsif, else, when, then, or against."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*\\(end\\|elsif\\|else\\|when\\|then\\|except\\)\
[ ;\t\n]")))

(defun s-ends-with-is-p ()
  "t if current line ends with the keyword 'is' and an optional comment."
  (save-excursion
    (end-of-line)
    (let ((end (point)))
      (beginning-of-line)
      (re-search-forward "\\(^\\|[ \t]\\)is[ \t]*\\($\\|--\\)" end t))))

(defun s-move-to-prev-non-comment ()
  "Moves point to previous line excluding comment lines and blank lines. 
Returns t if successful, nil if not."
  (beginning-of-line)
  (re-search-backward "^[ \t]*\\([^ \t---\n]\\|-[^---]\\)" nil t))

(defun s-move-to-prev-non-blank ()
  "Moves point to previous line excluding blank lines. 
Returns t if successful, nil if not."
  (beginning-of-line)
  (re-search-backward "^[ \t]*[^ \t\n]" nil t))

(defun s-comment-indent ()
  "Return indentation for a comment line."
    (save-excursion
      (let ((in (s-get-block-indent))
	    (prev-is-blank
	      (save-excursion (and (= (forward-line -1) 0) (s-empty-line-p)))))
      (if (or (and prev-is-blank (= in 0)) ;move to prev line if there is one
	      (not (s-move-to-prev-non-blank))) 
	  0				;early comments start to the left
	(cond ((s-ends-with-is-p)	;line ends in 'is,' indent twice
	       (+ satherk-indent (s-current-indentation)))
	      ((s-comment-line-p)         ;is a comment, same indentation
	       (s-current-indentation))
	      (t                          ;otherwise indent once
		(+ satherk-indent (s-current-indentation))))))))

(defun s-quoted-string-on-line-p ()
  "t if a Sather-K quoted string begins, ends, or is continued on current line."
  (save-excursion
    (beginning-of-line)
    ;; Line must either start with optional whitespace immediately followed
    ;; by a '\\' or include a '\"'.  It must either end with a '\\' character
    ;; or must include a second '\"' character.
    (looking-at "^\\([ \t]*\\\\\\|[^\"\n]*\"\\)[^\"\n]*\\(\\\\$\\|\"\\)")))

(defun s-in-quoted-string-p ()
  "t if point is in a quoted string."
  (let ((pt (point)) front)
    (save-excursion
      ;; Line must either start with optional whitespace immediately followed
      ;; by a '\\' or include a '\"'.
      (if (re-search-backward "\\(^[ \t]*\\\\\\|\"\\)"
			      (save-excursion (beginning-of-line) (point)) t)
	  (progn (setq front (point))
		 (forward-char 1)
		 ;; Line must either end with a '\\' character or must
		 ;; include a second '\"' character.
		 (and (re-search-forward
			"\\(\\\\$\\|\"\\)"
			(save-excursion (end-of-line) (point)) t)
		      (>= (point) pt)
		      (<= front pt)
		      t)))
      )))

(defun s-get-block-indent ()
  "Return the outer indentation of the current block. Returns 0 or less if 
it can't find one. Looks for first unpaired is, if, loop, case, typecase,
or protect."
  (save-excursion
    (let ((depth 1))
      (while (and (> depth 0)
		  ;; Search for start of keyword
		  (re-search-backward
		   "\\(^\\|[ \t]\\)\\(is[ \t]*\\($\\|--\\)\\|if\\|loop\
\\|case\\|typecase\\|begin\\|assert\\|end\\)" nil t))
	(goto-char (match-beginning 2))
	(cond ((or (s-in-comment-p)
		   ;;(s-in-quoted-string-p) leave out for now
		   )
	       nil)                       ;ignore it
	      ((looking-at "end")         ;end of block
	       (setq depth (1+ depth)))
	      ((looking-at "is")
	       (cond ((s-starts-with-class-p) (setq depth -2))
		     ((= depth 1)(setq depth -1))
		     (t (setq depth -2))))
	      (t                          ;head of block
	       (setq depth (1- depth)))))
      (cond ((> depth 0)		;check whether we hit top of file
	     0)
	    ((= depth -1)		;Hit an "is" in a routine def
	     satherk-indent)
	    ((= depth -2)		;Hit class def or outside rout
	     0)
	    (t (current-indentation))))))


;; AF: fix indentation for subtype and include statements
(defun s-starts-with-inheritance-p ()
  "True if line starts with either subtype or iclude."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*\\(subtype of\\|include\\)[ \t\n]")))


(cond (window-system
       (require 'hilit19)
       (hilit-translate 
	class       'purple-bold
	inherit     'firebrick-bold
	method      'blue-bold
	goto        'firebrick
	keyword     'ForestGreen-bold
	)
;       (make-face-italic 'italic)
       (hilit-set-mode-patterns 
	'(satherk-mode Sather-K)
	'(
	  ("--.+$" nil comment)
	  ("[^\\]\"" ".*\"" string)
	  ("^[ \t]*\\(abstract[ \t]+\\){0,1}\\(value\\|external\\)[ \t]+){0,1}class[ \t]+.+is[ \t]*$" nil class)
	  ("^end;" "$" class)
	  ("^   \\(subtype of\\|include\\)[ \n\t].+$" nil inherit)
;	  ("^[ ]+\\(.+[ \n\t]is\\)$" nil defun)
	  ("^   \\(.+ is\\|end;\\)" nil method)
	  ("^[ ]+\\(private[ \t]\\)?\\(const\\|readonly\\|shared\\)" nil keyword)

	  ("^      deferred" nil keyword)
	  ("[ \n\t]\\(if\\|then\\|else\\|elsif\\|switch\\|when\\|loop\\|until\\|except\\|begin\\|\\(type\\)?case\\)[ \n\t]" nil keyword)
	  ("\\(     \\|\t\\)[ \t\n]*end;" nil keyword)
	  ("resume\\|return\\|break\\|raise\\|exit" nil goto)
	  ("\$[^.;:]" ".;:" decl)
))))

(provide 'satherk-mode)

;;; end of Sather-K mode
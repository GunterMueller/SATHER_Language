;;; -*- Mode: Emacs-Lisp;  -*-
;;; File: language-tools.el
;;; Author: Heinz Schmidt (hws@ICSI.Berkeley.EDU)
;;; Copyright (C) International Computer Science Institute, 1991
;;;
;;; COPYRIGHT NOTICE: This code is provided "AS IS" WITHOUT ANY WARRANTY.
;;; It is subject to the terms of the GNU EMACS GENERAL PUBLIC LICENSE
;;; described in a file COPYING in the GNU EMACS distribution or to be obtained
;;; from Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;;* FUNCTION: language-idependent syntax-directed tools;
;;;*           non-lispy syntactic constructs based on thing.el;
;;;* 
;;;* RELATED PACKAGES: thing, cl; various language modes use this now
;;;*
;;;* HISTORY:
;;;  * Last edited: Jun  1 14:58 1994 (frick)
;;;* Last edited: Mar  8 21:14 1994 (frick)
;;;*  Jun  2 19:02 1991 (hws): make commands work in text mode too where
;;;*                           comment-start is nil.
;;;*  May 23 23:40 1991 (hws): make independent of epoch-utils
;;;*  May 22 09:02 1991 (hws): added lang.indep.doc support for copyright notice
;;;*  May  9 18:33 1991 (hws): region uncommenting did not work in C mode, fixed
;;;*  Mar  6 09:11 1991 (hws): completed doc-last-edited and auto log for this
;;;*  Feb 24 22:13 1991 (hws): make region commenting work in non language mode
;;;*      add various replacement tools.
;;;* Created: Mon Jan 14 08:11:43 1991 -- partly copied from .emacs;
;;;* partly from my eiffel-mode and generalized a little.
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(require 'thing)
(require 'mini-cl)

(provide 'language-tools)


;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Documentation Standard
;;;
;;; Oh sure, everybody wants to have their own. So take care there
;;; are a few variables to customize the patterns easily. Also no automatic
;;; link to classes or other templates. Whatever you choose the majority
;;; of users won't be pleased with it.

(defun comment-start-or-prompt ()
  (or comment-start (read-input "Comment start: ")))
  
;;; Time / date auxiliaries a la Common Lisp,
;;; I wouldn't be surprised if there is something like this around elsewhere.
(defun get-decoded-time ()
  "Return the current time as a list of strings representing: 
second, minute, hour, date, month, year, day-of-week, and the full time-string."
  ;;"Sat Jan 12 18:22:40 1991"
  ;; 012345678901234567890123
  ;;           1         2
  (let ((time-string (current-time-string)))
    (list (substring time-string 17 19)
	  (substring time-string 14 16)
	  (substring time-string 11 13)
	  
	  (substring time-string 8 10)
	  (substring time-string 4 7)
	  (substring time-string 20 24)
	  
	  (substring time-string 0 3)
	  time-string)))

(defun current-time-year () (nth 5 (get-decoded-time)))
(defun brief-current-time-string ()
  (let ((decoded-time (get-decoded-time)))
    (format "%s %s %s:%s %s" 
	    (nth 4 decoded-time)	;month
	    (nth 3 decoded-time)	;date
	    (nth 2 decoded-time)	;hour
	    (nth 1 decoded-time)	;minute
	    (nth 5 decoded-time)	;year
	    )))

(defvar doc-modifications-keyword "HISTORY"
  "* The modifications keyword to use with the log documentation commands.
Inserted by doc-header and used to position logs by doc-modification.
If NIL it will not be inserted.")

(defvar doc-last-edited-keyword "Last edited"
  "* The keyword used for write change log. Inserted by doc-last-edited.
Auto logging is controlled by user variable doc-auto-log-mode-list.
A new log replaces the old one in its line, if there is one or chooses
a default place if there is none.")

(defvar doc-auto-log-mode-list 
  '(emacs-lisp-mode lisp-mode eiffel-mode c-mode satherk-mode tex-mode)
  "A list of modes for which an update log is to be updated automatically when the 
file is saved.")

(defvar doc-who-am-i (list (user-full-name) (user-login-name))
  "* A list (user-full-name login-name) to use in documentation. 
If NIL, author documentation will be omitted.")
(defvar doc-where-am-i 
  (list "International Computer Science Institute" "ICSI.Berkeley.EDU")
  "* A list (affiliation-full-name affiliation-email-name) to use in documentation.
If NIL, copyright documentation will be omitted.")

(defvar doc-copyright-note nil
  "* A list (PATHNAME STRING) specifying the copyright note to include.  If
PATHNAME is non-nil then this file will be included.  Otherwise STRING is
used. If NIL, the note will be omitted completely.")

(defvar doc-file-summary 
  (list nil 
	"* FUNCTION:
*
* CLASSES:
* 
* RELATED PACKAGES:
*
")
  "* A list (PATHNAME STRING) specifying the doc-header template to use for 
summarizing a file. If PATHNAME is non-nil then this file will be included. 
Otherwise STRING is used. If NIL, the file summary will be omitted.")


(defvar doc-rcs-summary
  (list nil "
 RCS: $Id$
")
)



(defvar doc-separator-pattern "~"
  "* A string pattern repeatedly inserted to produce a separator line.")

(defun doc-separator-line ()
  ;; avoid wrapping on dumb terminals via modem (deliberately hard-wired)
  (fill-to (- fill-column (length comment-start))
	   doc-separator-pattern " " "\n"))

(defun verify-user-identification (EXPLICIT)
  "Checks and updates the user variables doc-who-am-i and doc-where-am-i.
When EXPLICIT, the user is prompted for name and email address."
  (cond (EXPLICIT
	 (setq doc-who-am-i
	       (list (read-input "Who are you really? User name: " (nth 0 doc-who-am-i))
		     (read-input "Email user id: " (nth 1 doc-who-am-i)))
	       doc-where-am-i
	       (list (read-input "Affiliation: " (nth 0 doc-where-am-i))
		     (read-input "Email host: " (nth 1 doc-where-am-i)))))	      
	(t;; enforce a meaningful user identification if necessary
	 (if (not (and doc-who-am-i (consp doc-who-am-i)
		       (= (length doc-who-am-i) 2)))
	     (setq doc-who-am-i
		   (list (user-full-name) (user-login-name))))
	 (if (not (and doc-where-am-i (consp doc-where-am-i)
		       (= (length doc-where-am-i) 2)))
	     (setq doc-where-am-i 
		   (list  (nth 0 doc-who-am-i) (system-name)))))))

(defvar file-property-list nil
  "* Language modes may have this as a buffer variable. The value is a string
to be used in the file property list inserted by doc-header. The file property
list is the first commented line of the file and is respected by Emacs. Cf.
the Gnu Emacs documentation of modes for more info.")

(defun insert-file-or-string (spec)
  "Spec nil or (pathname str), tells wether and if what to include at point."
  (if spec (cond ((car spec)
		  (insert-file (car spec)))
		 ((stringp (cadr spec))
		  (insert (cadr spec)))
		 ((null spec) t)	; else ignore
		 )))

(defun doc-copyright-note ()
  "Insert a copyright notice. Cf. user variable doc-copyright-note for details."
  (interactive)
  (beginning-of-buffer)
  (if (re-search-forward "Copyright" nil t) ; find a place close to copyright
      (beginning-of-line 2))
  (let ((begin (point)))
    (insert-file-or-string doc-copyright-note)
    (cond ((/= begin (point))
	   (comment-region-lines begin (1- (point)))))))
  
(defun doc-header (EXPLICIT)
  "Insert a documentation header at the top of the buffer. This works for various
language modes. 
With prefix argument (EXPLICIT non-nil), the user is prompted for name and email 
address. By default the value of the user variable doc-who-am-i is used, which
is modified if EXPLICIT is non-nil."
  (interactive "P")
  (beginning-of-line)
  (let ((comment-start (if (memq major-mode '(emacs-lisp-mode lisp-mode))
			   ";;;" comment-start))
	(from (point))			
	author affiliation contact)
    (verify-user-identification EXPLICIT)
    ;; file property list allows Emacs to understand mode specific properties
    ;; if file does not end in the 'right' suffix.
    (insert (format " -*- Mode: %s; " mode-name)
	    (if file-property-list file-property-list "")
	    " -*-\n")
    ;; Who's who and what's what
    (insert " File: "(buffer-name) "\n")
    (if doc-who-am-i
	(insert 
	 " Author: " (nth 0 doc-who-am-i) 
	 " (" (nth 1 doc-who-am-i) "@"  (nth 1 doc-where-am-i) ")\n"))
    (if doc-where-am-i
	(insert 
	 " Copyright (C) " (nth 0 doc-where-am-i) ", " (current-time-year) "\n"))
    (insert-file-or-string doc-copyright-note)
    (doc-separator-line)
    (insert-file-or-string doc-file-summary)
    (doc-separator-line)
    (insert-file-or-string doc-rcs-summary)
    (if doc-modifications-keyword 
	(insert " " doc-modifications-keyword ":\n"
		" Created: " (current-time-string) 
		" (" (nth 1 doc-who-am-i) ")" "\n"))
    (if (or doc-file-summary doc-modifications-keyword)
	(doc-separator-line))
    (comment-region-lines from 
			  (save-excursion (beginning-of-line 0) (point))))
  )

(defun doc-modification (EXPLICIT)
  "Insert a brief modification log at the top of the buffer. Looks for
an occurrence of the value of user variable doc-modifications-keyword 
if non-nil.
With prefix argument (non-nil first argument if called from program), the user 
is prompted for name and affiliation which are used to update the user variables
doc-who-am-i and doc-where-am-i. By default the value of these user variables are used."
  (interactive "P")
  (let ((cs (cond ((memq major-mode '(emacs-lisp-mode lisp-mode)) ";;;")
		  ((and comment-end (not (equal comment-end ""))) " ") ; in the middle
		  (t (comment-start-or-prompt))))
	bal)
    (beginning-of-buffer) 
    (verify-user-identification  EXPLICIT)
    (cond ((and doc-modifications-keyword
		(re-search-forward (concat doc-modifications-keyword ":") nil t))
	   (end-of-line)
	   ;; move past last-edited log if any
	   (if (save-excursion
		 (beginning-of-line 2)
		 (looking-at (concat cs (if (string-equal cs " ") "\\*\\* " "  \\* ")
				     doc-last-edited-keyword ": ")))
	       (end-of-line 2)))
	  ;; there seems to be no header, let's assume that this log can standalone
	  (t (setq cs comment-start bal t)))   
    (insert "\n" cs (if (string-equal cs " ") "**  " "  *  ") (brief-current-time-string) 
	    " (" (nth 1 doc-who-am-i) "): ")
    (if bal (save-excursion (insert comment-end)))
    ))

(defun doc-last-edited (EXPLICIT)
  "Insert a brief log of the last time this file was edited (saved with changes).
Looks for an occurrence of the value of user variable doc-modification-keyword if non-nil.
With prefix argument (non-nil first argument if called from program), the user 
is prompted for name and affiliation which are used to update the user variables
doc-who-am-i and doc-where-am-i. By default the value of these user variables are used."
  (interactive "P")
  (let* ((cs (cond ((memq major-mode '(emacs-lisp-mode lisp-mode)) ";;;")
		   ((and comment-end (not (equal comment-end ""))) " ")
		   (t (comment-start-or-prompt)))) 
	 header
	 bal)
    (beginning-of-buffer) 
    (verify-user-identification EXPLICIT)
    ;; delete an existing log, if we find one we stay there
    (cond ((re-search-forward (concat "  \\* " doc-last-edited-keyword ": ") nil t)
	   (beginning-of-line)
	   (kill-line 1)
	   ;; check whether we are in a header
	   (if (and doc-modifications-keyword
		(save-excursion 
		  (re-search-backward (concat "  \\* " doc-modifications-keyword ":") nil t)))
	       (setq header t)
	       ))
	  ;; position to the right place if there was none
	  ((and doc-modifications-keyword
		(re-search-forward (concat doc-modifications-keyword ":") nil t))
	   (beginning-of-line 2)
	   (setq header t)))
    (if (and (not header) (string-equal cs " "))
	;; don't see a header, prepare for standalone comment
	(setq cs comment-start bal t))
    ;; insert the proper line
    (insert cs (if (string-equal cs " ") "** " "  * ") doc-last-edited-keyword ": "
	    (brief-current-time-string) " (" (nth 1 doc-who-am-i) ")")
    (if bal (insert comment-end))
    (insert "\n"))  
  )

(defun auto-doc-last-edited ()
  "A hook to be used with write-file-hooks. Inserts an update log in the file header
using the doc-last-edited command."
  (if (memq major-mode doc-auto-log-mode-list)
      (save-excursion
	(doc-last-edited nil))))

(defun fill-to (col pattern &optional start end)
  "Fills current line to COL by repeating PATTERN. 
Optionally START is inserted before and END is inserted after."
  (if (stringp start) (insert start))
  (if (stringp pattern)
      (let ((len (length pattern)))
	(if (> len 0)
	    (while (< (current-column) col)
	      (cond ((< len (- col (current-column))) ; pattern fits
		     (insert pattern))
		    (t			
		     (insert (substring pattern 0 (- col (current-column)))))))
	  )))
  (if (stringp end) (insert end)))


;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Region Commenting/Uncommenting
;;; Maybe this can be done in a simpler way with fill-prefix, simplify later.

(defun comment-region-lines (from to &optional nspaces)
  "Comment-out the lines in region defined by FROM and TO. Do this using
the value of the variables comment-start and comment-end. Optionally insert
n spaces defined by prefix arg (or third argument if called from
program)."
  (interactive "r\nP")			; region and prefix
  ;; order points
  (if (> from to) (let (x) (setq x to to from from x)))
  ;; extend region to include full lines
  (save-excursion
    (let* ((comment-start (comment-start-or-prompt))
	   (closing-comment (and comment-end (not (equal comment-end ""))))
	   (next-cs (if closing-comment " *" comment-start)))
      ;; treat first and last line specially but do it from bottom to top
      ;; otherwise our positions from to may be invalidated.
      (goto-char from) (beginning-of-line) (setq from (point))
      (goto-char to) (beginning-of-line) (setq to (point))
      (let ((done nil))
	(beginning-of-line)
	;; point at line begin
	(while (and (not done) (>= (point) from))
	  ;; point must be at line begin
	  (if (<= (point) from) (setq done t)) ;don't loop forever if from = top
	  (cond ((= (point) from) (insert comment-start))
		((= (point) to) (insert next-cs)
		 (cond (closing-comment (end-of-line) (insert comment-end))))
		(t (insert next-cs)))		;point is behind comment-start
	  (if (and nspaces (> nspaces 0)) (dotimes (i nspaces) (insert " ")))
	  (beginning-of-line 0))))))

(defun delete-if-looking-at (string)
  (let ((len (length string))
	(p (point)))
    (if (string-equal (buffer-substring p (+ p len))
		      string)
	(delete-region p (+ p len)))))
		
(defun delete-if (test list)
  "Destructively delete all elements satisfying TEST from LIST."
  ;; delete first items
  (while (and list (listp list) (funcall test (car list)))
    (setq list (cdr list)))
  ;; delete items in rest list
  (let ((prev list))
    (while (cdr prev)
      (if (funcall test (cadr prev))
	  (setcdr prev (cddr prev))
	(setq prev (cdr prev))))
    list))
			 
(defun uncomment-region-lines (from to)
  "Uncomment lines commented by comment-region-lines. Do this using
the value of the variables comment-start and comment-end. Optionally insert
n spaces defined by prefix arg (or third argument if called from
program)."
  (interactive "r")			; region and prefix
  ;; order points
  (if (> from to) (let (x) (setq x to to from from x)))
  ;; extend region to include full lines
  (save-excursion
    (let* ((comment-start (comment-start-or-prompt))
	   (closing-comment (and comment-end (not (equal comment-end ""))))
	   (next-cs (if closing-comment " *" comment-start)))
      ;; treat first and last line specially but do it from bottom to top
      ;; otherwise our positions from to may be invalidated.
      (goto-char from) (beginning-of-line) (setq from (point))
      (goto-char to) (beginning-of-line) (setq to (point))
      (let ((done nil))
	(beginning-of-line)
	;; point at line begin
	(while (and (not done) (>= (point) from))
	  ;; point must be at line begin
	  (if (<= (point) from) (setq done t)) ;don't loop forever if from = top
	  (cond ((= (point) from) (delete-if-looking-at comment-start))
		((= (point) to) (delete-if-looking-at next-cs)
		 (cond (closing-comment 
			(end-of-line) (backward-char (length comment-end))
			(delete-if-looking-at comment-end))))
		(t (delete-if-looking-at next-cs))) ;point is behind comment-start
	  (beginning-of-line 0))))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Comment and strings
;;;

(defun empty-line-p ()
  "True if current line is empty."
  (save-excursion
    (beginning-of-line)
    (looking-at "^[ \t]*$")))

(defun comment-line-p ()
  "t if current line is just a comment."
  (save-excursion
    (beginning-of-line)
    (skip-chars-forward " \t")
    (and comment-start (looking-at comment-start))))

(defun comment-on-line-p ()
  "t if current line contains a comment."
  (save-excursion
    (beginning-of-line)
    (and comment-start
	 (looking-at (format "[^\n]*%s" comment-start)))))

(defun in-comment-p (point)
  "t if POINT is in a comment."
  (save-excursion
    (goto-char point)
    (and (/= (point) (point-max)) (forward-char 1))
    (and comment-start
	 (search-backward comment-start 
			  (save-excursion (beginning-of-line) (point)) t))))

(defun in-quoted-string-p (point)
  "Is point is in a quoted string, i.e. is there a quote to the left and
to the right and the number of quotes to the right is odd. Multi line strings
are assumed to end in a slash (\\). If point is in a string return end of string."
  (save-excursion 
    (goto-char point)
    (let ((pt point) end quotep)
      (end-of-line)
      ;; to next line-end not ending in escape
      (while (= (char-syntax (char-after (1- (point)))) ?\\)
	(end-of-line 2))
      ;; backward to point counting even odd quotes, we are out of quotes
      (while (and (< pt (point)) (re-search-backward "\"" pt t))
	(if (not quotep) (setq end (1+ (point))))
	(setq quotep (not quotep))
	(while (= (char-syntax (char-after (1- (point)))) ?\\)
	  (setq quotep (not quotep))
	  (backward-char 1)))
      (if quotep end))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Replacements in non-comment
;;;

(defun replace-all-strings (l &optional full-word)
  "Replace strings in the current restriction. STRINGS is a list of pairs
 (from to) or (from to query), where the latter form tells that the user is 
to confirm the replacement. Without confirmation, replacements will occur only
in non-comment regions. FROM is a pattern that is attempted to be matched and
if so, will be replaced by the string TO. Bind the variable case-fold-search 
appropriately to control matching."
  (dolist 
   (pair l)
   (goto-char (point-min))
   (skip-comment)
   (let ((from (car pair)) (to (cadr pair))
	 (query (caddr pair)))
     (while (re-search-forward from (point-max) t)
       (let ((begin (match-beginning 0))
	     (end (match-end 0)))
	 (when (if query (y-or-n-p (format "Replace \"%s\" by \"%s\"? "
					   from to))
		 (and (not (in-comment-p begin))
		      (or (not full-word)
			  (and 
			   (save-excursion 
			     (goto-char begin)
			     (or (= (point) (point-min))
				 (progn (backward-char 1)
					(not (looking-at "[A-Za-z0-9_]")))))
			   (save-excursion 
			     (goto-char end)
			     (or (= (point) (point-max))
				 (not (looking-at "[A-Za-z0-9_]"))))))))
	       (delete-region begin end)
	       (insert to)))))))

(defun replace-all-words (l)
  (replace-all-strings l t))

(defun delete-all-strings (l)
  "Delete the strings in the current restriction. STRINGS is a list of
patterns, i.e. reg. expressions. Each match will be deleted from begin to end 
if it in between white space. The whole line will be deleted if the match is 
the only text on the line. Use replace-all-strings if you want to delete
matches contained in a word. Bind the variable case-fold-search 
appropriately to control matching."
  (let (single)
    (dolist (str l)
	    ;; delete all lines containing just this string
	    (goto-char (point-min)) (skip-comment)
	    (setq single (format "[ \t]+%s[ \t]*\n" str))
	    (while (re-search-forward single (point-max) t)
	      (delete-region (save-excursion (beginning-of-line 0) 
					     (point)) (point)))
	    (goto-char (point-min))
	    (setq single (format "[ \t]%s[ \t]" str))
	    (while (re-search-forward single (point-max) t)
	      (when (not (in-comment-p (match-beginning 0)))
		    (delete-region (1+ (match-beginning 0)) (point)))))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Movement
;;;

(defun skip-comment ()
  "Moves forward over comment lines."
  (interactive)
  (let ((comment-start (comment-start-or-prompt)))
    (skip-chars-forward " \t\n")
    (while (looking-at comment-start)
      (beginning-of-line 2) (skip-chars-forward " \t"))))
  
(defun skip-layout ()
  "Moves forward over comment lines and white space."
  (interactive)
  (let ((comment-start (comment-start-or-prompt)))
    (skip-chars-forward " \t\n")
    (while (looking-at comment-start)
      (skip-comment)
      (skip-chars-forward " \t\n"))))

(defun skip-layout-backward ()
  "Moves backward over comment and white space."
  (interactive)
  (skip-chars-backward " \t\n")
  (while (and (or (in-comment-p (point)) (and (eolp) (comment-on-line-p)))
	      (not (bobp)))
    (end-of-language-line)
    (skip-chars-backward " \t\n")))

(defun skip-punctuation ()
  "Moves forward over punctuation marks according to the current syntax."
  (interactive)
  (let ((comment-start (comment-start-or-prompt)))
    (let (ch)
      (while (and (setq  ch (char-after (point)))
		  (= (char-syntax ch) ?\.)
		  (not (looking-at comment-start)))
	(forward-char 1)))))

(defun end-of-language-line ()		;avoid naming conflicts
  "Moves to the beginning of comment-start in the current line or to
the end of line. We assume we are outside a quoted string."
  (save-restriction
    (narrow-to-region (progn (beginning-of-line) (point))
		      (save-excursion (end-of-line) (point)))
    (cond ((and comment-start (re-search-forward comment-start nil t))
	   (forward-char (- (length comment-start))))
	  (t (end-of-line)))))

(defun next-language-keyword (&optional no-error) ;avoid naming conflicts
  ;;we must be right on it, keywords are symbols starting with word
  (let ((ch (char-after (point))))
    (cond ((not ch) 
	   (if (not no-error) (error "End of input reached while trying to find keyword.")))
	  ((= (char-syntax ch) ?w)
	   (intern (buffer-substring (point) (save-excursion (forward-sexp) (point)))))
	  (t nil))))

;;; Is there a logical bug in  Emacs sexp movements? If comments are ignored
;;; forwards works but backwards are completely messed up.
;;; Add a sort of forward-sexp without sideeffect on backward movement.
(defun forward-sexp-ignore-comments (&optional arg)
  "Move forward across one balanced expression ignoring comment 
-- independently of the setting of parse-sexp-ignore-comments.
With argument, do this that many times."
  (interactive "P")
  (let ((arg (or arg 1))
	beginning)
    (cond ((zerop arg) t)
	  ((> arg 0)
	   (let ((parse-sexp-ignore-comments t)) ; cf. scan-sexps
	     (forward-sexp arg)))
	  ((< arg 0)			;assume we are NOT in a string
	   (let ((parse-sexp-ignore-comments nil))
	     ;; top-level comment balanced by eol was a problem in Emacs 18.55
	     ;; Moreover quotes in comment may not be balanced like in "don't".
	     (while (< arg 0)
	       (skip-layout-backward)	; we must be on something there.
	       (if (and (not (bobp)) (= ?. (char-syntax (char-after (1- (point))))))
		   (backward-char 1)	; otherwise we may end up in comment
		 (progn (forward-sexp -1) ;may end up in comment
			(setq arg (1+ arg))))))))))

(defun backward-sexp-ignore-comments (&optional arg)
  "Move backward across one balanced expression ignoring comment
-- independently of the setting of parse-sexp-ignore-comments.
With argument, do this that many times."
  (interactive "P")
  (forward-sexp-ignore-comments (- (or arg 1))))

(defvar matching-identifiers-alist
  '((class . (search-forward-is-end))
    (is . (expand-to-definition-end))
    (if . end)
    (loop . end)
    (switch . end)
    (debug . end) 
    (assert . end))
  "* An alist of matching identifiers used to recognize balanced top-level (!)
constructs fast without the need of a parser for a keyword oriented language.
Nesting is respected by various commands, in particular by identation and marking.
Each cons in the list has the form (begin . end)  or  (begin . (fn)).
where `begin', `end' and `fn' are symbols. When the keyword `begin' is recognized
scanning will expect the matching `end' or run `fn' to find the proper end.
To add to them one might add to a language mode hook forms like there:

  (make-local-variable 'matching-identifiers-alist) ; if mode does not have it yet
  (setq matching-identifier-alist 
    '((if . end) (loop . end) (switch . end) (debug . end) (assert . end)))")

(defun search-forward-matching (here begin end &optional limit) 
  "HERE is the beginning of the keyword BEGIN. Point is assumed to be after
BEGIN. BEGIN is passed for documentation purposes.  Moves over balanced
top-level (!) expressions according to the current syntax and the value of
matching-identifiers-alist until END is recognized or the optional LIMIT is
reached. Point will end up after END including optional punctuation but not the
white space following that punctuation.  BEGIN is a symbol.  END is a symbol,
representing a language keyword, or a cons (fn), where `fn' is a function to
find the end. `fn' is called with two arguments HERE and BEGIN.  `fn' is to move
point immediately past the end of the construct.  `fn' should return a cons
 (begin . end) indicating the boundaries of the construct to be used for the
thing syntax."
  (let ((comment-start (comment-start-or-prompt)))
    (if (consp end) 
	(funcall (car end) here begin)
      (let (next item found)
	(while (progn
		 (skip-layout) 
		 (setq next 
		       (or (next-language-keyword t)
			   (if (not (char-after (point)))
			       (error "Saw `%s'. End of input reached while scanning for `%s'."
				      begin end))))
		 (cond ;;((and limit (> (point) limit)) nil)
		  ((eq end next) (setq found t) nil)
		  (t t)))
	  ;; it is not end, check whether new beginning
	  (setq pair (assq next matching-identifiers-alist))
	  (cond (pair 
		 (search-forward-matching
		  (prog1 (point) (forward-sexp)) (car pair) (cdr pair)))
		;;move past it, it may be punctuation though
		((and (= (char-syntax (char-after (point))) ?\.)
		      (not (looking-at comment-start)))
		 (forward-char 1))
					;otherwise forward and eat following punctuation too
		(t (forward-sexp) (skip-punctuation))))
	(cond (found
	       ;; end found, move past it and past immediately following punctuation
	       (forward-sexp) (skip-punctuation)
	       (cons here (point))))))))

(defun forward-matching-exp (&optional arg)
  "Move forward one balanced expression. With ARG (first arg when called
from program) move forward that many times."
  (interactive "P")
  (let ((comment-start (comment-start-or-prompt)))
    (skip-layout)
    (setq arg (or arg 1))
    (if (not (< arg 1))
	(while (/= arg 0)
	  (let* ((next (next-language-keyword))
		 (pair (and next (assq next matching-identifiers-alist))))
	    (cond (pair  
		   (search-forward-matching 
		    (prog1 (point) (forward-sexp)) (car pair) (cdr pair)))
		  ((and (char-after (point))
			(= (char-syntax (char-after (point))) ?\.)
			(not (looking-at comment-start)))
		   (forward-char 1))
		  (t (forward-sexp-ignore-comments))))
	  (setq arg (1- arg))))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Example of matching function: 
;;; In Eiffel routines are written     <head> is do <body> end; 
;;; without leading keyword. All this is inside 
;;;                      class <name> ... end;
;
;(defun search-forward-is-end (here begin)
;  "HERE is a buffer point, BEGIN a keyword starting HERE. 
;Finds the next top-level occurrence of `is', matches it with the corresponding
;end and returns the respective boundaries from HERE to the end found.
;Point is expected to end up after the end."
;  (search-forward-matching here begin 'is)
;  (search-forward-matching (point) 'is 'end)
;  (cons here (point))) 
;  
;(defun expand-to-definition-end (here begin)
;  "HERE is a buffer point, BEGIN a keyword starting HERE.
;Find the definition beginning and end and return the boundaries found.
;Point is expected to end up after the end."
;  (let ((end (progn (search-forward-matching here begin 'end) (point))))
;    (save-excursion
;      (goto-char here)
;      (while (cond ((looking-at "end[ \t\n]*;") ; before `end' if found
;		    ;; before `end', go next routine start
;		    (re-search-forward "end[ \t\n]*;")
;		    (skip-layout) 
;		    nil)		
;		   ((looking-at "class[ \t\n]*;")
;		    (re-search-forward "class[ \t\n]*;")
;		    (skip-layout)
;		    nil)
;		   (t t))
;	(backward-sexp-ignore-comments))
;      (cons (point) end))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Make all thing commands understand matching expressions.

(defun thing-matching-expr-or-word (here)
  "Return start and end of word at HERE. If HERE points to the first character
of a language keyword in matching-identifiers-alist, then select the whole construct."
  (save-excursion
    (goto-char here)
    (let* ((next (next-language-keyword))
	   (pair (and next (assq next matching-identifiers-alist))))
      (cond (pair		 
	     (forward-sexp) 
	     (search-forward-matching here (car pair) (cdr pair)))
	    (t (thing-word here))))))

(cond ((boundp 'thing-boundary-alist)
       (setq thing-boundary-alist
	     (cons (list ?w 'thing-matching-expr-or-word)
		   (delete-if '(lambda (x)
				 (= (car x) ?w))
			      thing-boundary-alist)))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Template insertion, avoid messy code at template def. site.

(defvar terse-template-spacing t
  "* Controls whether the spacing in nested templates is terse or wide.")

(defun insert-template (prompt &rest elements)
  "Prompts for a name if PROMPT is non-nil and inserts the REST elements.
By default the template is embedded into newline-indent's so that a construct
can `unfold' itself in the middle of another construct without requiring user
type-in. This works by optionally inserting newlines before and after the construct
only if there are other preceding/following constructs.
The REST elements define the template as follows:
Strings are inserted literally, a cons is evaluated and symbols are either of
TAB for `run indent-line-function',
HOT-SPOT for `cursor ends up here', HOT-SPOT auto-indents before recording,
NAME for `name' prompted for."
  (let ((p (point))
	hs name)
    (cond ((consp prompt) (setq name (read-input (car prompt))
				name (funcall (cdr prompt) name)))
	  (prompt (setq name (read-input prompt))))
    (cond ((save-excursion (beginning-of-line) 
			   (and (re-search-forward "^[ \t]*" nil t)
				(< (point) p)))
	   (funcall indent-line-function) (newline-and-indent)))
    (cond ((not terse-template-spacing) (insert "\n") (funcall indent-line-function)))
    (dolist (elem elements)	     
	    (cond ((stringp elem) (insert elem))
		  ((eq elem 'TAB) (funcall indent-line-function))
		  ;; make sure we do not move the line after having the hot spot
		  ((eq elem 'HOT-SPOT) 
		   (funcall indent-line-function) (setq hs (point)))
		  ((eq elem 'NAME) (insert (format "%s" name)))
		  ((consp elem) (eval elem))))
    (funcall indent-line-function)
    (cond ((save-excursion (setq p (point)) ; inserted a lot, end up anywhere
			   (end-of-line) 
			   (re-search-backward "[ \t]*")
			   (< p (point)))
	   (funcall indent-line-function) 
	   (newline-and-indent)))
    (cond ((not terse-template-spacing) (insert "\n") (funcall indent-line-function)))
    (if hs (goto-char hs))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Sample templates
;;; Try successive C-c i, C-c i, C-c u, C-c l, C-c u  (i.e. if, until, loop)
;;; to see how it works its way through nesting. Then once in a while
;;; do a C-e in between. Better, use the abbrev def below, toggle
;;; into abbrev-mode and let templates expand as you go along. (Again
;;; exercise the difference in feeling w/ occasional C-e.) Toggle
;;; back into plain editing when it becomes a straightjacket. Avoid
;;; full keywords as abbrev invocators or expect to be surprised
;;; when typing comments or to be annoyed when having to undo and toggle 
;;; out-of and back into abbrev-mode too often.

;(defun my-lang-if ()
;  "Insert an 'if' template."
;  (interactive)
;  (insert-template nil "if " 'HOT-SPOT " then\nelse " 'TAB "\nend; -- if"))
;
;(defun my-lang-loop ()
;  "Insert a 'loop' template."
;  (interactive)
;  (insert-template nil "until " 'HOT-SPOT " loop \nend; -- loop"))
;
;(defun my-lang-until ()
;  "Insert a common 'until' template."
;  (interactive)
;  (insert-template "Loop variable: "
;		   'NAME ":INT := 0;" 'TAB 
;		   "\nuntil " 'NAME " >= limit loop " 'HOT-SPOT
;		   "\n" 'NAME " := " 'NAME "+1;" 'TAB 
;		   "\Nend; -- loop"))
;
; Beside on keys, install them in the abbrevs for the mode like this:
;   (if (boundp 'my-lang-mode-abbrev-table) ; in your lang. mode hook
;        (setq local-abbrev-table my-lang-mode-abbrev-table))
;(define-abbrev-table 'my-lang-mode-abbrev-table 
;      '(;; all the other abbrevs skipped
;	;; templates 
;	("mif" "" my-lang-if 0)
;	("loo" "" my-lang-loop 0)
;	("unt" "" my-lang-until 0)))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Command installation
;;;

(defun install-common-language-commands (map)
  (define-key map "\C-\M-f" 'forward-sexp-ignore-comments)
  (define-key map "\C-\M-b" 'backward-sexp-ignore-comments)
  (define-key map "\C-ch" 'doc-header)
  (define-key map "\C-cm" 'doc-modification)
  (define-key map "\C-c;" 'skip-comment))

(install-common-language-commands emacs-lisp-mode-map)
(install-common-language-commands lisp-mode-map)
(install-common-language-commands c-mode-map)

;; obsolete; use Emacs-19 vc instead of
;; (push 'auto-doc-last-edited write-file-hooks)
 
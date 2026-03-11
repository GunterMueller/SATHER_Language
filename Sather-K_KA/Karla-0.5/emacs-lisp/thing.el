;;; -*- Mode: Emacs-Lisp;  -*-
;;; File: thing.el
;;; Authors: Heinz Schmidt, ICSI (hws@ICSI.Berkeley.EDU)
;;;              adapted from Dan L. Pierson's epoch-thing.el
;;;          Dan L. Pierson <pierson@encore.com>, 2/5/90
;;;              adapted from Joshua Guttman's Thing.el
;;;          Joshua Guttman, MITRE (guttman@mitre.org)
;;;              adapted from sun-fns.el by Joshua Guttman, MITRE.  
;;;
;;; Copyright (C) International Computer Science Institute, 1991
;;;
;;; COPYRIGHT NOTICE: This code is provided "AS IS" WITHOUT ANY WARRANTY.
;;; It is subject to the terms of the GNU EMACS GENERAL PUBLIC LICENSE
;;; described in a file COPYING in the GNU EMACS distribution or to be obtained
;;; from Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;;* FUNCTION: Things are language objects continguous pieces of text
;;;*           whose boundaries can be defined by syntax or context.
;;;*
;;;* RELATED PACKAGES: various packages built on this.
;;;*
;;;* HISTORY: 
;;;* Last edited: May 24 00:45 1991 (hws)
;;;*  May 24 00:33 1991 (hws): overworked and added syntax.
;;;* Created: 2/5/90 Dan L. Pierson
;;;*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

(provide 'thing)

(defun thing-boundaries (here)
  "Return start and end of text object at HERE using syntax table and thing-boundary-alist.  
Thing-boundary-alist is a list of pairs of the form (SYNTAX-CHAR FUNCTION)
where FUNCTION takes a single position argument and returns a cons of places
 (start end) representing boundaries of the thing at that position.  
Typically:
 Left or right Paren syntax indicates an s-expression.	
 The end of a line marks the line including a trailing newline. 
 Word syntax indicates current word. 
 Symbol syntax indicates symbol.
 If it doesn't recognize one of these it selects just the character HERE."
  (interactive "d")
  (if (save-excursion (goto-char here) (eolp))
      (thing-get-line here)
    (let* ((syntax (char-syntax (char-after here)))
	   (pair (assq syntax thing-boundary-alist)))      
      (if pair
	  (funcall (car (cdr pair)) here)
	(cons here (1+ here))))))

(defvar thing-boundary-alist
  '((?w thing-word)
    (?_ thing-symbol)
    (?\( thing-sexp-start)
    (?\$ thing-sexp-start)
    (?' thing-sexp-start)
    (?\" thing-sexp-start)
    (?\) thing-sexp-end)
    (?  thing-whitespace)
    (?< thing-comment)
    (?. thing-next-sexp))
  "*List of pairs of the form (SYNTAX-CHAR FUNCTION) used by THING-BOUNDARIES.")
  
(defun thing-get-line (here)
  "Return whole of line HERE is in, with newline unless at eob."
  (save-excursion
    (goto-char here)
    (let* ((start (progn (beginning-of-line 1) (point)))
	   (end (progn (forward-line 1) (point))))
      (cons start end))))

(defun thing-word (here)
  "Return start and end of word at HERE."
  (save-excursion
    (goto-char here)
    (forward-word 1)
    (let ((end (point)))
      (forward-word -1)
      (cons (point) end))))

(defun thing-symbol (here)
  "Return start and end of symbol at HERE."
  (let ((end (scan-sexps here 1)))
    (cons (min here (scan-sexps end -1)) end)))

(defun thing-sexp-start (here)
  "Return start and end of sexp starting HERE."
  (cons here (scan-sexps here 1)))

(defun thing-sexp-end (here)
  "Return start and end of sexp ending HERE."
  (cons (scan-sexps (1+ here) -1) (1+ here)))

(defun thing-whitespace (here)
  "Return start to end of all but one char of whitespace HERE, unless 
there's only one char of whitespace.  Then return start to end of it."
  (save-excursion
    (let ((start (progn (skip-chars-backward " \t") (1+ (point))))
	  (end (progn (skip-chars-forward " \t") (point))))
      (if (= start end)
	  (cons (1- start) end)
	(cons start end)))))

(defun kill-thing-at-point (here)
  "Kill text object using syntax table.
See thing-boundaries for definition of text objects"
  (interactive "d")
  (let ((bounds (thing-boundaries here)))
    (kill-region (car bounds) (cdr bounds))))

(defun copy-thing-at-point (here)
  "Copy text object using syntax table.
See thing-boundaries for definition of text objects"
  (interactive "d")
  (let ((bounds (thing-boundaries here)))
    (copy-region-as-kill (car bounds) (cdr bounds))))

;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
;;; Improve thing syntax, effective only if thing.el is around.
;;; Allow click to comment-char to extend to end of line

(defun thing-comment (here)
  "Return rest of line from HERE to newline."
  (save-excursion (goto-char here)
		  (end-of-line)
		  (cons here (point))))

;;; Also extend puctuation marks not followed by white-space to include
;;; the subsequent sexp. Useful in foo.bar(x).baz and such.
(defun thing-next-sexp (here)
  (if (= ?  (char-syntax (char-after (1+ here))))
      (cons here (1+ here))
    (cons here 
	  (save-excursion (forward-sexp) (point)))))

(defun thing-grab-boundaries (back fwd)
  (cons (save-excursion (funcall back) (point))
	(save-excursion (funcall fwd) (point))))

(defun thing-sentence (here)
  (save-excursion 
    (goto-char here)
    (thing-grab-boundaries 'backward-sentence 'forward-sentence)))

(defun thing-paragraph (here)
  (save-excursion 
    (goto-char here)
    (thing-grab-boundaries 'backward-paragraph 'forward-paragraph)))

(defun thing-backward-up (ignore)
  (let ((start (nth 0 mouse-save-excursion-info))
	(end (nth 1 mouse-save-excursion-info)))
    (if (< end start) (psetq start end end start)) ;order points
    (cons 
     (save-excursion (goto-char start) (backward-up-list 1) 
		     (setq start (point)))
     (save-excursion (goto-char start) (forward-sexp) (point)))))

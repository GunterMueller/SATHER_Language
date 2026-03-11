;;
;; Karla-Definitionen
;;

(defvar karla-dir (getenv "KARLA") "path to the Karla library")

(autoload 'satherk-mode "satherk.el" "Sather mode" t nil)
      (setq auto-mode-alist
            (append
              (list (cons "\\.sa$" 'satherk-mode))
              auto-mode-alist))
  

;;
;; Sather-Mode anpassen
;;

(defun satherk-mode-hooks nil
  "* A list of functions to be run after sather-mode.")

(defun karla-file-summary ()
  (interactive "*")
  (insert "-- Author: Autor1, Autor2, ... (Email-Adress)
--
-- This file is part of Karla, the Karlsruhe Library of Algorithms
--
-- Copyright (C) Universitaet Karlsruhe, 1994
--
-- COPYRIGHT NOTICE: This code is provided \"AS IS\" WITHOUT ANY WARRANTY
-- and is subject to the terms of the KARLA LIBRARY GENERAL PUBLIC
-- LICENSE contained in the file: \"doc/license.txt\" of the 
-- distribution. 
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--* FILE: 
--*
--* CLASSES: 
--* 
--* IMPLEMENTATION OF: 
--*
--* CONFORMS TO:
--*
--* IS A: 
--*
--* REQUIRED CLASSES: 
--*
--* EXCEPTIONS:  
--*
--* TEST CLASS: 
--*
--* FOREIGN FILES:
--
--  RCS: $Id$
--  HISTORY: $Log$
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
"))

(defun karla-class  ()
  (interactive "*")
  (insert "    -- * CLASS: 
   -- * DESCRIPTION:
   -- * SUBCLASS OF: 
   -- * SPECIALIZATION OF: 
   -- * IMPLEMENTATION OF: 
   -- * EXCEPTIONS: 
   -- * INVARIANT: 
   -- * REPRESENTATION:
   -- * COMPLEXITY: 
   -- * REFERENCES: 
   -- * ATTRIBUTES: 
"))


(defun karla-method ()
  (interactive "*")
  (if (not (s-empty-line-p))
      (progn (end-of-line)(newline)))
  (beginning-of-line)  
;  (push-mark)
  (let ((beg (point)))
    (insert "-- * METHOD: \n-- * DESCRIPTION: \n-- * PRE: \n-- * POST: \n-- * COMPLEXITY: \n-- * REFERENCES: \n")
    (indent-region beg (point) (s-calc-indent))
    (pop-mark)
;   (indent-according-to-mode)
    (end-of-line)
    ))
  
(require 'satherk-mode "satherk")

(define-key satherk-mode-map   [f3] 'karla-method)
(define-key satherk-mode-map [S-f3] 'karla-class)
(define-key satherk-mode-map [C-f3] 'karla-file-summary)

(provide 'karla)

;;; end of karla.el



;;; Local Variables: ***
;;; mode:lisp ***
;;; write-file-hooks: nil ***
;;; End: ***

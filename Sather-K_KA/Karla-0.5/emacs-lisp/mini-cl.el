;;; Copyright (C) 1990  Christopher J. Love
;;;*  Dec  2 1990 Heinz Schmidt (hws@icsi.berkeley.edu): 
;;;*     modified to load under native Emacs. Changes in the order of macro defs.
;;;*     some were called (defsetf) before being defined.
;;;
;;; This file is for use with Epoch, a modified version of GNU Emacs.
;;; Requires Epoch 3.2 or later.
;;;
;;; This code is distributed in the hope that it will be useful,
;;; bute WITHOUT ANY WARRANTY. No author or distributor accepts
;;; responsibility to anyone for the consequences of using this code
;;; or for whether it serves any particular purpose or works at all,
;;; unless explicitly stated in a written agreement.
;;;
;;; Everyone is granted permission to copy, modify and redistribute
;;; this code, but only under the conditions described in the
;;; GNU Emacs General Public License, except the original author nor his
;;; agents are bound by the License in their use of this code.
;;; (These special rights for the author in no way restrict the rights of
;;;  others given in the License or this prologue)
;;; A copy of this license is supposed to have been given to you along
;;; with Epoch so you can know your rights and responsibilities. 
;;; It should be in a file named COPYING.  Among other things, the
;;; copyright notice and this notice must be preserved on all copies. 
;;;
;;; mini-cl.el - provide minimum skeleton of common-lisp support needed
;;;		 to load epoch elisp code.  Selections taken from cl.el
;;;
(provide 'mini-cl)

;;
;; when
;;

(defmacro when (condition &rest body)
  "(when CONDITION . BODY) => evaluate BODY if CONDITION is true."
  (list* 'if (list 'not condition) '() body))

;;
;; list*
;;
(defun endp (x)
  "t if X is nil, nil if X is a cons; error otherwise."
  (if (listp x)
      (null x)
    (error "endp received a non-cons, non-null argument `%s'"
	   (prin1-to-string x))))
(defun last (x)
  "Returns the last link in the list LIST."
  (if (nlistp x)
      (error "Arg to `last' must be a list"))
  (do ((current-cons    x       (cdr current-cons))
       (next-cons    (cdr x)    (cdr next-cons)))
      ((endp next-cons) current-cons)))
(defun butlast (list &optional n)
  "Return a new list like LIST but sans the last N elements.
N defaults to 1.  If the list doesn't have N elements, nil is returned."
  (if (null n) (setq n 1))
  (reverse (nthcdr n (reverse list))))
(defun list* (arg &rest others)
  "Return a new list containing the first arguments consed onto the last arg.
Thus, (list* 1 2 3 '(a b)) returns (1 2 3 a b)."
  (if (null others)
      arg
    (let* ((allargs (cons arg others))
           (front   (butlast allargs))
           (back    (last allargs)))
      (rplacd (last front) (car back))
      front)))

;;
;; do, do*, dotimes
;;
(defmacro do (stepforms endforms &rest body)
  "(do STEPFORMS ENDFORMS . BODY): Iterate BODY, stepping some local variables.
STEPFORMS must be a list of symbols or lists.  In the second case, the
lists must start with a symbol and contain up to two more forms. In
the STEPFORMS, a symbol is the same as a (symbol).  The other 2 forms
are the initial value (def. NIL) and the form to step (def. itself).
The values used by initialization and stepping are computed in parallel.
The ENDFORMS are a list (CONDITION . ENDBODY).  If the CONDITION
evaluates to true in any iteration, ENDBODY is evaluated and the last
form in it is returned.
The BODY (which may be empty) is evaluated at every iteration, with
the symbols of the STEPFORMS bound to the initial or stepped values."
  ;; check the syntax of the macro
  (and (check-do-stepforms stepforms)
       (check-do-endforms endforms))
  ;; construct emacs-lisp equivalent
  (let ((initlist (extract-do-inits stepforms))
        (steplist (extract-do-steps stepforms))
        (endcond  (car endforms))
        (endbody  (cdr endforms)))
    (cons 'let (cons initlist
                     (cons (cons 'while (cons (list 'not endcond) 
                                              (append body steplist)))
                           (append endbody))))))


(defmacro do* (stepforms endforms &rest body)
  "`do*' is to `do' as `let*' is to `let'.
STEPFORMS must be a list of symbols or lists.  In the second case, the
lists must start with a symbol and contain up to two more forms. In
the STEPFORMS, a symbol is the same as a (symbol).  The other 2 forms
are the initial value (def. NIL) and the form to step (def. itself).
Initializations and steppings are done in the sequence they are written.
The ENDFORMS are a list (CONDITION . ENDBODY).  If the CONDITION
evaluates to true in any iteration, ENDBODY is evaluated and the last
form in it is returned.
The BODY (which may be empty) is evaluated at every iteration, with
the symbols of the STEPFORMS bound to the initial or stepped values."
  ;; check the syntax of the macro
  (and (check-do-stepforms stepforms)
       (check-do-endforms endforms))
  ;; construct emacs-lisp equivalent
  (let ((initlist (extract-do-inits stepforms))
        (steplist (extract-do*-steps stepforms))
        (endcond  (car endforms))
        (endbody  (cdr endforms)))
    (cons 'let* (cons initlist
                     (cons (cons 'while (cons (list 'not endcond) 
                                              (append body steplist)))
                           (append endbody))))))


;;; DO and DO* share the syntax checking functions that follow.

(defun check-do-stepforms (forms)
  "True if FORMS is a valid stepforms for the do[*] macro (q.v.)"
  (cond
   ((nlistp forms)
    (error "Init/Step form for do[*] should be a list, not `%s'"
           (prin1-to-string forms)))
   (t                                   ;valid list
    ;; each entry must be a symbol, or a list whose car is a symbol
    ;; and whose length is no more than three
    (mapcar
     (function
      (lambda (entry)
        (cond
         ((or (symbolp entry)
              (and (listp entry)
                   (symbolp (car entry))
                   (< (length entry) 4)))
          t)
         (t
          (error
           "Init/Step must be symbol or (symbol [init [step]]), not `%s'"
           (prin1-to-string entry))))))
     forms))))

(defun check-do-endforms (forms)
  "True if FORMS is a valid endforms for the do[*] macro (q.v.)"
  (cond
   ((listp forms)
    t)
   (t
    (error "Termination form for do macro should be a list, not `%s'"
           (prin1-to-string forms)))))

(defun extract-do-inits (forms)
  "Returns a list of the initializations (for do) in FORMS
-a stepforms, see the do macro-. Forms is assumed syntactically valid."
  (mapcar
   (function
    (lambda (entry)
      (cond
       ((symbolp entry)
        (list entry nil))
       ((listp entry)
        (list (car entry) (cadr entry))))))
   forms))

;;; There used to be a reason to deal with DO differently than with
;;; DO*.  The writing of PSETQ has made it largely unnecessary.

(defun extract-do-steps (forms)
  "EXTRACT-DO-STEPS FORMS => an s-expr
FORMS is the stepforms part of a DO macro (q.v.).  This function
constructs an s-expression that does the stepping at the end of an
iteration."
  (list (cons 'psetq (select-stepping-forms forms))))

(defun extract-do*-steps (forms)
  "EXTRACT-DO*-STEPS FORMS => an s-expr
FORMS is the stepforms part of a DO* macro (q.v.).  This function
constructs an s-expression that does the stepping at the end of an
iteration."
  (list (cons 'setq (select-stepping-forms forms))))

(defun select-stepping-forms (forms)
  "Separate only the forms that cause stepping."
  (let ((result '())			;ends up being (... var form ...)
	(ptr forms)			;to traverse the forms
	entry				;to explore each form in turn
	)
    (while ptr				;(not (endp entry)) might be safer
      (setq entry (car ptr))
      (cond
       ((and (listp entry)
	     (= (length entry) 3))
	(setq result (append		;append in reverse order!
		      (list (caddr entry) (car entry))
		      result))))
      (setq ptr (cdr ptr)))		;step in the list of forms
    ;;put things back in the
    ;;correct order before return
    (nreverse result)))

;;; Other iterative constructs

(defmacro dolist  (stepform &rest body)
  "(dolist (VAR LIST [RESULTFORM]) . BODY): do BODY for each elt of LIST.
The RESULTFORM defaults to nil.  The VAR is bound to successive
elements of the value of LIST and remains bound (to the nil value) when the
RESULTFORM is evaluated."
  ;; check sanity
  (cond
   ((nlistp stepform)
    (error "Stepform for `dolist' should be (VAR LIST [RESULT]), not `%s'"
           (prin1-to-string stepform)))
   ((not (symbolp (car stepform)))
    (error "First component of stepform should be a symbol, not `%s'"
           (prin1-to-string (car stepform))))
   ((> (length stepform) 3)
    (error "Too many components in stepform `%s'"
           (prin1-to-string stepform))))
  ;; generate code
  (let* ((var (car stepform))
         (listform (cadr stepform))
         (resultform (caddr stepform)))
    (list 'progn
          (list 'mapcar
                (list 'function
                      (cons 'lambda (cons (list var) body)))
                listform)
          (list 'let
                (list (list var nil))
                resultform))))

(defmacro dotimes (stepform &rest body)
  "(dotimes (VAR COUNTFORM [RESULTFORM]) .  BODY): Repeat BODY, counting in VAR.
The COUNTFORM should return a positive integer.  The VAR is bound to
successive integers from 0 to COUNTFORM-1 and the BODY is repeated for
each of them.  At the end, the RESULTFORM is evaluated and its value
returned. During this last evaluation, the VAR is still bound, and its
value is the number of times the iteration occurred. An omitted RESULTFORM
defaults to nil."
  ;; check sanity 
  (cond
   ((nlistp stepform)
    (error "Stepform for `dotimes' should be (VAR COUNT [RESULT]), not `%s'"
           (prin1-to-string stepform)))
   ((not (symbolp (car stepform)))
    (error "First component of stepform should be a symbol, not `%s'"
           (prin1-to-string (car stepform))))
   ((> (length stepform) 3)
    (error "Too many components in stepform `%s'"
           (prin1-to-string stepform))))
  ;; generate code
  (let* ((var (car stepform))
         (countform (cadr stepform))
         (resultform (caddr stepform))
         (newsym (gentemp)))
    (list
     'let* (list (list newsym countform))
     (list*
      'do*
      (list (list var 0 (list '+ var 1)))
      (list (list '>= var newsym) resultform)
      body))))

;;
;; psetq
;;
(defmacro psetq (&rest pairs)
  "(psetq {VARIABLE VALUE}...): In parallel, set each VARIABLE to its VALUE.
All the VALUEs are evaluated, and then all the VARIABLEs are set.
Aside from order of evaluation, this is the same as `setq'."
  (let ((nforms (length pairs))		;count of args
	;; next are used to destructure the call
	symbols				;even numbered args
	forms				;odd numbered args
	;; these are used to generate code
	bindings			;for the let
	newsyms				;list of gensyms
	assignments			;for the setq
	;; auxiliary indices
	i)
    ;; check there is a reasonable number of forms
    (if (/= (% nforms 2) 0)
	(error "Odd number of arguments to `psetq'"))
    ;; destructure the args
    (let ((ptr pairs)			;traverses the args
	  var				;visits each symbol position
	  )
      (while ptr
	(setq var (car ptr))		;next variable
	(if (not (symbolp var))
	    (error "`psetq' expected a symbol, found '%s'."
		   (prin1-to-string var)))
	(setq symbols (cons var symbols))
	(setq forms   (cons (car (cdr ptr)) forms))
	(setq ptr (cdr (cdr ptr)))))
    ;; assign new symbols to the bindings
    (let ((ptr forms)			;traverses the forms
	  form				;each form goes here
	  newsym			;gensym for current value of form
	  )
      (while ptr
	(setq form (car ptr))
	(setq newsym (gensym))
	(setq bindings (cons (list newsym form) bindings))
	(setq newsyms (cons newsym newsyms))
	(setq ptr (cdr ptr))))
    (setq newsyms (nreverse newsyms))	;to sync with symbols
    ;; pair symbols with newsyms for assignment
    (let ((ptr1 symbols)		;traverses original names
	  (ptr2 newsyms)		;traverses new symbols
	  )
      (while ptr1
	(setq assignments
	      (cons (car ptr1) (cons (car ptr2) assignments)))
	(setq ptr1 (cdr ptr1))
	(setq ptr2 (cdr ptr2))))
    ;; generate code
    (list 'let
	  bindings
	  (cons 'setq assignments)
	  nil)))

;;
;; Keywords.  There are no packages in Emacs Lisp, so this is only a
;;
(defmacro defkeyword (x &optional docstring)
  "Make symbol X a keyword (symbol whose value is itself).
Optional second argument is a documentation string for it."
  (cond
   ((symbolp x)
    (list 'defconst x (list 'quote x)))
   (t
    (error "`%s' is not a symbol" (prin1-to-string x)))))
(defun keywordp (sym)
  "Return `t' if SYM is a keyword."
  (cond
   ((and (symbolp sym)
         (char-equal (aref (symbol-name sym) 0) ?\:))
    ;; looks like one, make sure value is right
    (set sym sym))
   (t
    nil)))
(defun keyword-of (sym)
  "Return a keyword that is naturally associated with symbol SYM.
If SYM is keyword, the value is SYM.
Otherwise it is a keyword whose name is `:' followed by SYM's name."
  (cond
   ((keywordp sym)
    sym)
   ((symbolp sym)
    (let ((newsym (intern (concat ":" (symbol-name sym)))))
      (set newsym newsym)))
   (t
    (error "Expected a symbol, not `%s'" (prin1-to-string sym)))))
(defvar *gentemp-index* 0
  "Integer used by gentemp to produce new names.")
(defvar *gentemp-prefix* "T$$_"
  "Names generated by gentemp begin with this string by default.")
(defun gentemp (&optional prefix oblist)
  "Generate a fresh interned symbol.
There are 2 optional arguments, PREFIX and OBLIST.  PREFIX is the
string that begins the new name, OBLIST is the obarray used to search for
old names.  The defaults are just right, YOU SHOULD NEVER NEED THESE
ARGUMENTS IN YOUR OWN CODE."
  (if (null prefix)
      (setq prefix *gentemp-prefix*))
  (if (null oblist)
      (setq oblist obarray))            ;default for the intern functions
  (let ((newsymbol nil)
        (newname))
    (while (not newsymbol)
      (setq newname (concat prefix *gentemp-index*))
      (setq *gentemp-index* (+ *gentemp-index* 1))
      (if (not (intern-soft newname oblist))
          (setq newsymbol (intern newname oblist))))
    newsymbol))
(defvar *gensym-index* 0
  "Integer used by gensym to produce new names.")
(defvar *gensym-prefix* "G$$_"
  "Names generated by gensym begin with this string by default.")
(defun gensym (&optional prefix)
  "Generate a fresh uninterned symbol.
There is an  optional argument, PREFIX.  PREFIX is the
string that begins the new name. Most people take just the default,
except when debugging needs suggest otherwise."
  (if (null prefix)
      (setq prefix *gensym-prefix*))
  (let ((newsymbol nil)
        (newname   ""))
    (while (not newsymbol)
      (setq newname (concat prefix *gensym-index*))
      (setq *gensym-index* (+ *gensym-index* 1))
      (if (not (intern-soft newname))
          (setq newsymbol (make-symbol newname))))
    newsymbol))
;;
;; setf
;;
(defkeyword :setf-update-fn
  "Property, its value is the function setf must invoke to update a
generalized variable whose access form is a function call of the
symbol that has this property.")
(defkeyword :setf-update-doc
  "Property of symbols that have a `defsetf' update function on them,
installed by the `defsetf' from its optional third argument.")
(defmacro setf (&rest pairs)
  "Generalized `setq' that can set things other than variable values.
A use of `setf' looks like (setf {PLACE VALUE}...).
The behavior of (setf PLACE VALUE) is to access the generalized variable
at PLACE and store VALUE there.  It returns VALUE.  If there is more
than one PLACE and VALUE, each PLACE is set from its VALUE before
the next PLACE is evaluated."
  (let ((nforms (length pairs)))
    ;; check the number of subforms
    (cond
     ((/= (% nforms 2) 0)
      (error "Odd number of arguments to `setf'"))
     ((= nforms 0)
      nil)
     ((> nforms 2)
      ;; this is the recursive case
      (cons 'progn
            (do*                        ;collect the place-value pairs
                ((args pairs (cddr args))
                 (place (car args) (car args))
                 (value (cadr args) (cadr args))
                 (result '()))
                ((endp args) (nreverse result))
              (setq result
                    (cons (list 'setf place value)
                          result)))))
     (t                                 ;i.e., nforms=2
      ;; this is the base case (SETF PLACE VALUE)
      (let* ((place (car pairs))
             (value (cadr pairs))
             (head  nil)
             (updatefn nil))
        ;; dispatch on the type of the PLACE
        (cond
         ((symbolp place)
          (list 'setq place value))
         ((and (listp place)
               (setq head (car place))
               (symbolp head)
               (setq updatefn (get head :setf-update-fn)))
	  (if (or (and (consp updatefn) (eq (car updatefn) 'lambda))
		  (and (symbolp updatefn)
		       (fboundp updatefn)
		       (let ((defn (symbol-function updatefn)))
			 (or (subrp defn)
			     (and (consp defn) (eq (car defn) 'lambda))))))
	      (cons updatefn (append (cdr place) (list value)))
	    (multiple-value-bind
		(bindings newsyms)
		(pair-with-newsyms (append (cdr place) (list value)))
	      ;; this let* gets new symbols to ensure adequate order of
	      ;; evaluation of the subforms.
	      (list 'let
		    bindings              
		    (cons updatefn newsyms)))))
         (t
          (error "No `setf' update-function for `%s'"
                 (prin1-to-string place)))))))))
(defmacro defsetf (accessfn updatefn &optional docstring)
  "Define how `setf' works on a certain kind of generalized variable.
A use of `defsetf' looks like (defsetf ACCESSFN UPDATEFN [DOCSTRING]).
ACCESSFN is a symbol.  UPDATEFN is a function or macro which takes
one more argument than ACCESSFN does.  DEFSETF defines the translation
of (SETF (ACCESFN . ARGS) NEWVAL) to be a form like (UPDATEFN ARGS... NEWVAL).
The function UPDATEFN must return its last arg, after performing the
updating called for."
  ;; reject ill-formed requests.  too bad one can't test for functionp
  ;; or macrop.
  (when (not (symbolp accessfn))
    (error "First argument of `defsetf' must be a symbol, not `%s'"
           (prin1-to-string accessfn)))
  ;; update properties
  (put accessfn :setf-update-fn updatefn)
  (put accessfn :setf-update-doc docstring))

(defmacro push (item ref)
  "(push ITEM REF) -> cons ITEM at the head of the g.v. REF (a list)"
  (list 'setq ref (list 'cons item ref)))
(defmacro decf (ref &optional delta)
  "(decf REF [DELTA]) -> decrement the g.v. REF by DELTA (default 1)"
  (if (null delta)
      (setq delta 1))
  (list 'setq ref (list '- ref delta)))
(defmacro pop (ref)
    "(pop REF) -> (prog1 (car REF) (setq REF (cdr REF)))"
  (let ((listname (gensym)))
    (list 'let (list (list listname ref))
          (list 'prog1
                (list 'car listname)
                (list 'setq ref (list 'cdr listname))))))
;;
;; notevery
;;
(defun notevery (pred seq &rest moreseqs)
  "Test PREDICATE on each element of SEQUENCE; is it sometimes nil?
Extra args are additional sequences; PREDICATE gets one arg from each
sequence and we advance down all the sequences together in lock-step.
A sequence means either a list or a vector."
  (let ((args  (reassemble-argslists (list* seq moreseqs))))
    (do* ((ready nil)                   ;flag: return when t
          (result nil)                  ;resulting value
          (applyval nil)                ;result of applying pred once
          (remaining args
                     (cdr remaining))   ;remaining argument sets
          (current (car remaining)      ;current argument set
                   (car remaining)))
        ((or ready (endp remaining)) result)
      (setq applyval (apply pred current))
      (unless applyval
        (setq ready t)
        (setq result t)))))
;; c[ad]*r
(defun caar (X)
  "Return the car of the car of X."
  (car (car X)))

(defun cadr (X)
  "Return the car of the cdr of X."
  (car (cdr X)))

(defun cdar (X)
  "Return the cdr of the car of X."
  (cdr (car X)))

(defun cddr (X)
  "Return the cdr of the cdr of X."
  (cdr (cdr X)))

(defun caaar (X)
  "Return the car of the car of the car of X."
  (car (car (car X))))

(defun caadr (X)
  "Return the car of the car of the cdr of X."
  (car (car (cdr X))))

(defun cadar (X)
  "Return the car of the cdr of the car of X."
  (car (cdr (car X))))

(defun cdaar (X)
  "Return the cdr of the car of the car of X."
  (cdr (car (car X))))

(defun caddr (X)
  "Return the car of the cdr of the cdr of X."
  (car (cdr (cdr X))))

(defun cdadr (X)
  "Return the cdr of the car of the cdr of X."
  (cdr (car (cdr X))))

(defun cddar (X)
  "Return the cdr of the cdr of the car of X."
  (cdr (cdr (car X))))

(defun cdddr (X)
  "Return the cdr of the cdr of the cdr of X."
  (cdr (cdr (cdr X))))

(defun caaaar (X)
  "Return the car of the car of the car of the car of X."
  (car (car (car (car X)))))

(defun caaadr (X)
  "Return the car of the car of the car of the cdr of X."
  (car (car (car (cdr X)))))

(defun caadar (X)
  "Return the car of the car of the cdr of the car of X."
  (car (car (cdr (car X)))))

(defun cadaar (X)
  "Return the car of the cdr of the car of the car of X."
  (car (cdr (car (car X)))))

(defun cdaaar (X)
  "Return the cdr of the car of the car of the car of X."
  (cdr (car (car (car X)))))

(defun caaddr (X)
  "Return the car of the car of the cdr of the cdr of X."
  (car (car (cdr (cdr X)))))

(defun cadadr (X)
  "Return the car of the cdr of the car of the cdr of X."
  (car (cdr (car (cdr X)))))

(defun cdaadr (X)
  "Return the cdr of the car of the car of the cdr of X."
  (cdr (car (car (cdr X)))))

(defun caddar (X)
  "Return the car of the cdr of the cdr of the car of X."
  (car (cdr (cdr (car X)))))

(defun cdadar (X)
  "Return the cdr of the car of the cdr of the car of X."
  (cdr (car (cdr (car X)))))

(defun cddaar (X)
  "Return the cdr of the cdr of the car of the car of X."
  (cdr (cdr (car (car X)))))

(defun cadddr (X)
  "Return the car of the cdr of the cdr of the cdr of X."
  (car (cdr (cdr (cdr X)))))

(defun cddadr (X)
  "Return the cdr of the cdr of the car of the cdr of X."
  (cdr (cdr (car (cdr X)))))

(defun cdaddr (X)
  "Return the cdr of the car of the cdr of the cdr of X."
  (cdr (car (cdr (cdr X)))))

(defun cdddar (X)
  "Return the cdr of the cdr of the cdr of the car of X."
  (cdr (cdr (cdr (car X)))))

(defun cddddr (X)
  "Return the cdr of the cdr of the cdr of the cdr of X."
  (cdr (cdr (cdr (cdr X)))))

;;; some inverses of the accessors are needed for setf purposes

(defun setnth (n list newval)
  "Set (nth N LIST) to NEWVAL.  Returns NEWVAL."
  (rplaca (nthcdr n list) newval))

(defun setnthcdr (n list newval)
  "SETNTHCDR N LIST NEWVAL => NEWVAL
As a side effect, sets the Nth cdr of LIST to NEWVAL."
  (cond
   ((< n 0)
    (error "N must be 0 or greater, not %d" n))
   ((= n 0)
    (rplaca list (car newval))
    (rplacd list (cdr newval))
    newval)
   (t
    (rplacd (nthcdr (- n 1) list) newval))))


;;
;; setf
;;
(defsetf apply
  (lambda (&rest args)
    ;; dissasemble the calling form
    ;; "(((quote fn) x1 x2 ... xn) val)" (function instead of quote, too)
    (let* ((fnform (car args))          ;functional form
           (applyargs (append           ;arguments "to apply fnform"
                       (apply 'list* (butlast (cdr args)))
                       (last args)))
           (newupdater nil))            ; its update-fn, if any
      (cond
       ((and (symbolp fnform)
             (setq newupdater (get fnform :setf-update-fn)))
        ;; just do it
        (apply  newupdater applyargs))
       (t
        (error "Can't `setf' to `%s'"
               (prin1-to-string fnform))))))
  "`apply' is a special case for `setf'")
(defsetf aref
  aset
  "`setf' inversion for `aref'")
(defsetf nth
  setnth
  "`setf' inversion for `nth'")
(defsetf nthcdr
  setnthcdr
  "`setf' inversion for `nthcdr'")
(defsetf elt
  setelt
  "`setf' inversion for `elt'")
(defsetf first
  (lambda (list val) (setnth 0 list val))
  "`setf' inversion for `first'")
(defsetf second
  (lambda (list val) (setnth 1 list val))
  "`setf' inversion for `second'")
(defsetf third
  (lambda (list val) (setnth 2 list val))
  "`setf' inversion for `third'")
(defsetf fourth
  (lambda (list val) (setnth 3 list val))
  "`setf' inversion for `fourth'")
(defsetf fifth
  (lambda (list val) (setnth 4 list val))
  "`setf' inversion for `fifth'")
(defsetf sixth
  (lambda (list val) (setnth 5 list val))
  "`setf' inversion for `sixth'")
(defsetf seventh
  (lambda (list val) (setnth 6 list val))
  "`setf' inversion for `seventh'")
(defsetf eighth
  (lambda (list val) (setnth 7 list val))
  "`setf' inversion for `eighth'")
(defsetf ninth
  (lambda (list val) (setnth 8 list val))
  "`setf' inversion for `ninth'")
(defsetf tenth
  (lambda (list val) (setnth 9 list val))
  "`setf' inversion for `tenth'")
(defsetf rest
  (lambda (list val) (setcdr list val))
  "`setf' inversion for `rest'")
(defsetf car setcar "Replace the car of a cons")
(defsetf cdr setcdr "Replace the cdr of a cons")
(defsetf caar
  (lambda (list val) (setcar (nth 0 list) val))
  "`setf' inversion for `caar'")
(defsetf cadr
  (lambda (list val) (setcar (cdr list) val))
  "`setf' inversion for `cadr'")
(defsetf cdar
  (lambda (list val) (setcdr (car list) val))
  "`setf' inversion for `cdar'")
(defsetf cddr
  (lambda (list val) (setcdr (cdr list) val))
  "`setf' inversion for `cddr'")
(defsetf caaar
  (lambda (list val) (setcar (caar list) val))
  "`setf' inversion for `caaar'")
(defsetf caadr
  (lambda (list val) (setcar (cadr list) val))
  "`setf' inversion for `caadr'")
(defsetf cadar
  (lambda (list val) (setcar (cdar list) val))
  "`setf' inversion for `cadar'")
(defsetf cdaar
  (lambda (list val) (setcdr (caar list) val))
  "`setf' inversion for `cdaar'")
(defsetf caddr
  (lambda (list val) (setcar (cddr list) val))
  "`setf' inversion for `caddr'")
(defsetf cdadr
  (lambda (list val) (setcdr (cadr list) val))
  "`setf' inversion for `cdadr'")
(defsetf cddar
  (lambda (list val) (setcdr (cdar list) val))
  "`setf' inversion for `cddar'")
(defsetf cdddr
  (lambda (list val) (setcdr (cddr list) val))
  "`setf' inversion for `cdddr'")
(defsetf caaaar
  (lambda (list val) (setcar (caaar list) val))
  "`setf' inversion for `caaaar'")
(defsetf caaadr
  (lambda (list val) (setcar (caadr list) val))
  "`setf' inversion for `caaadr'")
(defsetf caadar
  (lambda (list val) (setcar (cadar list) val))
  "`setf' inversion for `caadar'")
(defsetf cadaar
  (lambda (list val) (setcar (cdaar list) val))
  "`setf' inversion for `cadaar'")
(defsetf cdaaar
  (lambda (list val) (setcdr (caar list) val))
  "`setf' inversion for `cdaaar'")
(defsetf caaddr
  (lambda (list val) (setcar (caddr list) val))
  "`setf' inversion for `caaddr'")
(defsetf cadadr
  (lambda (list val) (setcar (cdadr list) val))
  "`setf' inversion for `cadadr'")
(defsetf cdaadr
  (lambda (list val) (setcdr (caadr list) val))
  "`setf' inversion for `cdaadr'")
(defsetf caddar
  (lambda (list val) (setcar (cddar list) val))
  "`setf' inversion for `caddar'")
(defsetf cdadar
  (lambda (list val) (setcdr (cadar list) val))
  "`setf' inversion for `cdadar'")
(defsetf cddaar
  (lambda (list val) (setcdr (cdaar list) val))
  "`setf' inversion for `cddaar'")
(defsetf cadddr
  (lambda (list val) (setcar (cdddr list) val))
  "`setf' inversion for `cadddr'")
(defsetf cddadr
  (lambda (list val) (setcdr (cdadr list) val))
  "`setf' inversion for `cddadr'")
(defsetf cdaddr
  (lambda (list val) (setcdr (caddr list) val))
  "`setf' inversion for `cdaddr'")
(defsetf cdddar
  (lambda (list val) (setcdr (cddar list) val))
  "`setf' inversion for `cdddar'")
(defsetf cddddr
  (lambda (list val) (setcdr (cddr list) val))
  "`setf' inversion for `cddddr'")
(defsetf get
  put
  "`setf' inversion for `get' is `put'")
(defsetf symbol-function
  fset
  "`setf' inversion for `symbol-function' is `fset'")
(defsetf symbol-plist
  setplist
  "`setf' inversion for `symbol-plist' is `setplist'")
(defsetf symbol-value
  set
  "`setf' inversion for `symbol-value' is `set'")

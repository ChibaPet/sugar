(import format)
(import chicken.process-context)

(define sugar (string->number (car (cdr (argv)))))

(if (< sugar 40)
    (format #t "~a mmol/l = ~a mg/dl\n"
            sugar
            (inexact->exact (round (* sugar 18))))
    (format #t "~a mg/dl = ~a mmol/l\n"
            sugar
            (format #f "~0,2F" (exact->inexact (/ sugar 18)))))

(exit)

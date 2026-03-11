LIB    = libsa.a 
GCLIB  = libgc.a
MEMLIB = libmem.a

CC=		gcc
CFLAGS=		-g3
#-O2

all:		${LIB} ${GCLIB} ${MEMLIB}

${LIB}:		file_.o base_.o time_.o str_.o rts_.o exception.o unix_.o
		ar ruv ${LIB} file_.o base_.o time_.o str_.o rts_.o \
			exception.o unix_.o
		ranlib ${LIB}
#		ar t ${LIB}

${GCLIB}:	GC/gc.a
		cp GC/gc.a ${GCLIB}
		ranlib ${GCLIB}

${MEMLIB}:	scalloc.o 
		ar ruv ${MEMLIB} scalloc.o
		ranlib ${MEMLIB}
#		ar t ${MEMLIB}

.PHONY: GC/gc.a
GC/gc.a:;	(cd GC; make)

clean:;		-@rm -f *~ \#* *.o *.s core
		(cd GC; make clean)

clobber:;	-@rm -f *~ \#* *.o *.s core
		-@rm -f ${LIB} ${GC_LIB}
		(cd GC; make clobber)


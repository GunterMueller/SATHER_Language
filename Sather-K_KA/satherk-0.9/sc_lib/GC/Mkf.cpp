/**/# /* Changes: Heinz Schmidt (hws@csis.dit.csiro.AU) */
/**/# HISTORY:
/**/# *  Mar  1 22:57 1992 (hws): Integrated GC V1.9
/**/# *  Feb  2 15:10 1992 (hws): Shared defaults by prefixing later.


OBJS= alloc.o reclaim.o allochblk.o misc.o mach_dep.o mark_roots.o
/**/# add rt_allocobj.o for RT version
#ifdef RT
OBJS= alloc.o reclaim.o allochblk.o misc.o mach_dep.o mark_roots.o rt_allocobj.o
#endif

SRCS= reclaim.c allochblk.c misc.c alloc.c mach_dep.c rt_allocobj.s mips_dep.s mark_roots.c

#if defined(SCO)
CFLAGS= -O -Di386 -DSYSV -D${GCSILENT}
#else
CFLAGS= -O -D${GCSILENT}
#endif

/**/# Set SPECIALCFLAGS to -q nodirect_code on Encore.
/**/# On Sun systems under 4.0, it is probably safer to link with -Bstatic.
/**/# I am not sure that all static data will otherwise be found.
/**/# It also makes sense to replace -O with -O4, though it does not appear
/**/# to make much difference.

/**/# added above encore as conditionalization, is "NS32K" the right symbol?
/**/# Also merged the reported mips option.
#ifdef NS32K
SPECIALCFLAGS = -q nodirect_code
#else
#  ifdef mips
SPECIALCFLAGS = -D_BSD_SIGNALS -Dmips
#  else
SPECIALCFLAGS =
#  endif
#endif

all: gc.a gctest

$(OBJS): gc.h

/**/# ranlib on SysV not used. Use - in front.

gc.a: $(OBJS)
	$(AR) ru gc.a $(OBJS)
	-$(RANLIB) gc.a

/**/# mach_dep.c does not like optimization
/**/# on a MIPS machine, move mips_dep.s to mach_dep.s and remove
/**/# mach_dep.c as well as the following two lines from this Makefile
#ifdef mips
mach_dep.o: mips_dep.s
	$(CC) -c mips_dep.s -o mach_dep.o
#else
#   if defined(SCO)
mach_dep.o: mach_dep.c
	rcc -c -DSCO -Dmach_type_known ${SPECIALCFLAGS} mach_dep.c
#   else
mach_dep.o: mach_dep.c
	$(CC) -c ${SPECIALCFLAGS} mach_dep.c
#   endif
#endif

clean: 
	-rm -f gc.a test.o cons.o gctest output-local output-diff $(OBJS) \
	   setjmp_test

test.o: cons.h test.c

cons.o: cons.h cons.c

/**/# On a MIPS system, the BSD version of libc.a should be used to get
/**/# sigsetmask.  I found it necessary to link against the system V
/**/# library first, to get a working version of fprintf.  But this may have
/**/# been due to my failure to find the right version of stdio.h or some
/**/# such thing.
gctest: test.o cons.o gc.a
	if [ ${SKIPGC} = NO ] ; then \
	   $(CC) $(CFLAGS) -o gctest test.o cons.o gc.a ; \
	else \
	   $(CC) $(CFLAGS) -c -o gctest test.o cons.o gc.a ; \
	fi

setjmp_test: setjmp_test.c gc.h
	$(CC) -o setjmp_test -O setjmp_test.c

test: setjmp_test gctest
	./setjmp_test
	@echo "WARNING: for GC test to work, all debugging output must be turned off"
	rm -f output-local
	gctest > output-local
	-diff correct-output output-local > output-diff
	-@test -s output-diff && ${ECHO} 'Output of program "gctest" is not correct.  GC does not work.' || ${ECHO} 'Output of program "gctest" is correct.  GC probably works.' 
	
shar:
	makescript -o gc.shar README Makefile.cpp gc.h ${SRCS} test.c cons.c cons.h

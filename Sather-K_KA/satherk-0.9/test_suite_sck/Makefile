# simple example of a Makefile for sather-k programms compiled with sck.
# Reiner Mauch und Martin Trapp 27.8.92
# Modifications for Sather-K 12.11.1993 Peter Holzwarth
#
############################################
# type 'make' to compile.
# type 'make clean' to remove intermediate
#			files
# type 'make clobber' to remove all intermediate
#			file plus executables
############################################
# PRG is the name of the root class of the sather program (maybe lowercase)
# add all .sa sources that are required to SRC
# there are also macros for:
# - C object files				(OBJS)
# - debug and assertion keys			(KEYS)
# - C name mapping				(C_NAMES)
# - function pointers for sather routines	(FUNPTRS)

PRGS		= value_ok deep value_e1  \
		out_ok out_ep out_e1 \
		poly3 \
		sbinc_ok sbinc_e1 sbinc_e2 sbinc_e3 \
		show_dots \
		testcell \
		bound_ok \
		constr commandl \
		row_ok arr_ok array_ok \
		mini bintree

#---------------------------------------------------
# C object files that should be linked with ${PRG}
#e.g.: OBJS	= myc.o parser.o addr _${PRG}_addr.o
#---------------------------------------------------
OBJS		=

#-------------------------------
# debug and assertion keys
# e.g.: KEYS	= pre post print
#-------------------------------
KEYS		=

#----------------------------------------------------------
# C name mappings
# e.g.: C_NAMES = foobar ::= FOO::bar barfuss ::= BAR::fuss
#----------------------------------------------------------
C_NAMES		=

#-----------------------------------------------------------
# sather routines for which a C function pointer is required
# e.g.: FUNPTRS	= BUTTON::callback WINDOW::redraw
# each entry CLASS::routine will declare a new routine
# C::addr_CLASS_routine:F_OB which return the address of
# the routine in the given class.
# to use this feature you have to add _${PRG}_addr.o to OBJS
# and _${PRG}_addr.sa to SRC
#-----------------------------------------------------------
FUNPTRS		=


#change the following variables to your installation
#assumes, that SATHER_K_HOME and SATHER_K_LIB are defined
#as shell variables

SC		= ${SATHER_K_HOME}/bin/sun4/sck
SC_LIB_PATH	= ${SATHER_K_HOME}/sc_lib
# name of  the sc library (run time system)
SC_LIB		= -lsa
# name of the garbage collector lib (run time system)
GC_LIB		= -lgc

#sc flags
SCFLAGS		= -g

# math lib
LIBS=		-lm 

##########################################################################
#some useful targets.

all:		${PRGS}

clean:;		rm -f *.s *.o core \#* *~ _sather* ${PRG}.sather
clobber:	clean
		rm -f ${PRG} 

${PRGS}:	dummy
		@echo "**************************************"
		@echo "making $@"
		@echo "**************************************"
		-make -f Makefile_sather SC=${SC} SCFLAGS="${SCFLAGS}" SATHER_K_HOME=${SATHER_K_HOME} SPEED="${SPEED}" PRG="$@"
		
dummy:		

bin_PROGRAM= jupiter
jupiter_SOURCE = main.c


# Produce Option Variable-- POV
jupiter_CPPFLAGS = -I$(top_srcdir)/common
jupiter_LDADD = ../common/libjupcommon.a
# 
#check_SCRIPTS = greptest.sh redendent.

# TESTS is important  
TESTS = $(check_SCRIPTS)

greptest.sh:
	echo './jupiter | grep "Hello" ' > greptest.sh
	chmod +x greptest.sh
CLEANFILES = greptest.sh  # add it to clean list



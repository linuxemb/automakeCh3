bin_PROGRAM= jupiter
jupiter_SOURCE = main.c

check_SCRIPTS = grepest.sh
TEST= $(check_SCRIPTS)

greptest.sh:
	echo './jupiter | grep "Hello from . *jupiter!" ' > greptest.sh
	chmod +x greptest.sh
CLEANFILES = greptest.sh



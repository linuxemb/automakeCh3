#  src/Makefile.  Generated from Makefile.in by configure.
# package -speci substitution variables

package = Jupiter
version = 1.0 
tarname =jupiter
distdir = $(tarname)-$(version)

# prefix -speci substituion variable
prefix= /usr/local
exec_prefix =${prefix}
bindir = ${exec_prefix}/bin

# VPATH staff
srcdir = .


all: jupiter


jupiter: main.c
	gcc -g -O0 -o $@ $(srcdir)/main.c

check: all
	./jupiter | grep "Hello from .*jupiter"
	@echo "*** all Test passed ***"
clean:
	-rm jupiter
install:
	install -d $(prifix)/bin
	install -m 0755 jupiter $(prefix)/bin
# 2nd way of  install
	
#	cp jupiter /usr/bin
#	chown root:root /usr/bin/jupiter
#	chmod +x /usr/bin/jupiter
Makefile: Makefile.in ../config.status
	./config.status src/$@
../config.status: ../configure
	cd .. && ./config.status --recheck

.PHONE: all clean check



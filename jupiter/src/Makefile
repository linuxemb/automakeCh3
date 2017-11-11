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


#Tool specif substitutin var
CC	=  gcc
DEFS    = -DHAVE_CONFIG_H
CFLAGS  = -g -O2
CPPFLAGS =
LIBS	 = -lpthread -ldl 
INSTALL  =/usr/bin/install -c
INSTALL_DATA  =${INSTALL} -m 644
INSTALL_PROGRAM= ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}


all: jupiter


jupiter: main.c
#	gcc -g -O0 -o $@ $(srcdir)/main.c
	$(CC) -I. -I$(srcdir) -I.. $(DEFS) $(CPPFLAGS) $(CFLAGS) -o $@ main.c  $(LIBS)

#	gcc -g -O0 -o $@ $(srcdir)/main.c

check: all
	./jupiter | grep "Hello from .*jupiter"
	@echo "*** all Test passed ***"
clean:
	-rm jupiter


#3rd way of install
	$(INSTALL) -d $(DESTDIR)$(bindir)/jupiter
	$(INSTTTALL_PROGRAM) -m 0755 jupiter $(DESTDIR)$(bindir)/jupiter

# 1st way of install

install:
#	install -d $(prifix)/bin
#	install -m 0755 jupiter $(prefix)/bin
# 2nd way of  install
	
#	cp jupiter /usr/bin
#	chown root:root /usr/bin/jupiter
#	chmod +x /usr/bin/jupiter
Makefile: Makefile.in ../config.status
	./config.status src/$@
../config.status: ../configure
	cd .. && ./config.status --recheck

.PHONE: all clean check



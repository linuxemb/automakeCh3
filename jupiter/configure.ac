#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Jupiter], [1.0], [jupiterbugreport@example.org])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

	AC_MSG_WARN([
--------------------------------------------------
The pthread library and header file required to build jupiter. Stoppin...
check 'config.log' for more information.
------------------------------------------------------------------------])

# Checks for programs.
AC_PROG_CC
_DEBUG_START_
AC_CHECK_PROG([bash_var],[bash],[yes],[no],,[/usr/sbin/bash])
_DEBUG_END_

AC_PROG_INSTALL

# Checks for libraries. check for pthead lib
AC_SEARCH_LIBS([dlopen],[dl])


# Checks for header files.
AC_CHECK_HEADERS([stdlib.h pthread.h])
AC_CHECK_HEADERS([stdlib.h ])
have_pthreads=no

AC_SEARCH_LIBS([pthread_create], [pthread], [have_pthreads=yes]) 
if test "x{have_pthreads}" = xyes; then
	AC_CHECK_HEADERS([pthread.h],[],[have_pthreads=no])
fi

if test "x{have_ptheads}" = xno; then
	AC_MSG_WARN([
--------------------------------------------------
The pthread library and header file required to build jupiter. Stoppin...
check 'config.log' for more information.
------------------------------------------------------------------------])
fi

AC_CHECK_HEADERS([dlfcn.h])
# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT

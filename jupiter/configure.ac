#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

	AC_PREREQ([2.69])
	AC_INIT([Jupiter], [1.0], [jupiterbugreport@example.org])
	AM_INIT_AUTOMAKE
	LT_PREREQ([2,2])
	LT_INIT([dlopen])
	AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
	AC_PROG_CC
	_DEBUG_START_
AC_CHECK_PROG([bash_var],[bash],[yes],[no],,[/usr/sbin/bash])
	_DEBUG_END_
#	AC_PROG_RANLIB
	AC_PROG_CC_C_O
	AC_PROG_INSTALL

# Checks for libraries. check for pthead lib
AC_SEARCH_LIBS([dlopen],[dl])

# Check for command-line options
AC_ARG_ENABLE([asyn-exec],
               [  --disable-async-exec		 disable async exec],
		[async_exec= ${enableval}],      [async_exec=yes])

		have_pthreads=no
		AC_SEARCH_LIBS([pthread_create], [pthread], [have_pthreads=yes]) 

# Checks for header files.

		AC_CHECK_HEADERS([stdlib.h ])
		if test "x${have_pthreads}" = xyes; then

		AC_CHECK_HEADERS([pthread.h],[],[have_pthreads=no])
		AC_MSG_RESULT([
			------------------------------------------------------------------------
			The pthread library and header file required to build We found it...
			check 'config.log' for more information.
			------------------------------------------------------------------------])
		fi



if test "x${have_pthreads}" = xno; then
	if test "x${async_exec}" = xyes; then
		AC_MSG_WARN([
		--------------------------------------------------
		unable to find the pthreads on this system, build a single -thread version
		check 'config.log' for more information.
		------------------------------------------------------------------------])
	fi

		async_exec = no
fi



if test "x${async_exec}" = xyes; then
    AC_DEFINE([ASYNC_EXEC], 1, [async execution enabled])
fi

AC_CHECK_HEADERS([dlfcn.h])
# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

	AC_CONFIG_FILES([Makefile
			include/Makefile
			libjup/Makefile
			common/Makefile
			src/Makefile])
	AC_OUTPUT

#include <stdlib.h>
#include <stdio.h>
#include <jupcommon.h>
#include <libjupiter.h> 

#if HAVE_CONFIG_H
#include <config.h>
#endif
//Autoconf-provided portabiliyt

#if HAVE_PTHREAD_H
#include <pthread.h>
#endif




int  jupiter_print(const char* salutation, const char* name)
{
	print_routine(salutation, name);
}

/*
int print_routine(const char * salutation, const char * name)
{
#if ASYNC_EXEC
	pthread_t tid;
	pthread_create(&tid, 0, print_it, (void*)name);
	pthread_join(tid,0);
#else
	print_it(); 
#endif
	return 0;
}
*/

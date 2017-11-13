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



static void * print_it(void* data)
{
	return 0;
}


int print_routine(const char * name)
{
#if ASYNC_EXEC
	pthread_t tid;
	pthread_create(&tid, 0, print_it, (void*)name);
	pthread_join(tid,0);
#else
	print_it(name); 
#endif
	return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include "jupcommon.h"

#if HAVE_CONFIG_H
#include <config.h>
#endif
//Autoconf-provided portabiliyt

#if HAVE_PTHREAD_H
#include <pthread.h>
#endif


#if HAVE_DLFCN_H
#include <dlfcn.h>
#endif

static void * print_it(void* data)
{
	printf("Hello from thread %s!\n", (const char *) data);
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
	void *handle;
	printf("Hello from %s\n", name);
#if HAVE_DLFCN_H
	handle= dlopen("/usr/lib/libblas.so.3", RTLD_NOW);
	printf("dlopen %p\n", handle);
#endif
	return 0;
}

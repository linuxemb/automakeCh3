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
const char ** strings = (const char **)data;

//	printf("Hello from thread %s!\n", (const char *) data);
	printf("%s from  %s!\n", strings[0], strings[1]);
	return 0;
}


//int print_routine(const char * name)
int print_routine(const char * salutation, const char *name)

{
	const char* strings[] = {salutation, name};
#if ASYNC_EXEC
	pthread_t tid;
//	pthread_create(&tid, 0, print_it, (void*)name);
	pthread_create(&tid, 0, print_it, strings);
	pthread_join(tid,0);
#else
	print_it(strings);
#endif
	void *handle;
	printf("Hello from %s\n", name);
#if HAVE_DLFCN_H
	handle= dlopen("/usr/lib/libblas.so.3", RTLD_NOW);
	printf("dlopen %p\n", handle);
#endif
	return 0;
}

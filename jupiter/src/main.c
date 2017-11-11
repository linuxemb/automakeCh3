#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

#if HAVE_CONFIG_H
#include <config.h>
#endif
//Autoconf-provided portabiliyt

#if HAVE_DLFCN_H
#include <dlfcn.h>
#endif

static void * print_it(void* data)
{
	printf("Hello from thread %s!\n", (const char *) data);
	return 0;
}


int main(int argc ,char * argv[])
{
	pthread_t tid;
	pthread_create(&tid, 0, print_it, argv[0]);
	pthread_join(tid,0);
	void *handle;
	printf("Hello from %s\n", argv[0]);
#if HAVE_DLFCN_H
	handle= dlopen("/usr/lib/libblas.so.3", RTLD_NOW);
	printf("dlopen %p\n", handle);
#endif
	return 0;
}

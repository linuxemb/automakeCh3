#include <stdlib.h>
#include <stdio.h>
#if HAVE_CONFIG_H
#include <config.h>
#endif
//Autoconf-provided portabiliyt

#if HAVE_DLFCN_N
#include <dlfcn.h>
#endif




int main(int argc ,char * argv[])
{
void *handle;
	printf("Hello from %s\n", argv[0]);
#if HAVE_DLFCN_H
	handle= dlopen("/usr/lib/libblas.so.3", RTLD_NOW);
	printf("dlopen %p\n", handle);
#endif
	return 0;
}

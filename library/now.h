#ifndef NOW_H
#define NOW_H

#include <time.h>

char* now(){
	struct tm* ptr;
	time_t t;

	t = time(NULL);

	ptr = localtime(&t);

	return asctime(ptr);
}

#endif

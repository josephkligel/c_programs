#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(){
	char* fn = "hello.c";
	struct stat buf; 
	
	stat(fn, &buf);
	int size = buf.st_size;

	printf("%s size %d\n", fn, size);

	return 0;

}

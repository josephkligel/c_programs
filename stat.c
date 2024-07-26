#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char** argv){
	char* fn = argv[0];
	struct stat buf; 
	
	stat(fn, &buf);
	int size = buf.st_size;

	printf("%s: %d bytes\n", fn, size);

	return 0;

}

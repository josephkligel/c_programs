#ifndef GET_FILE_SIZE_H
#define GET_FILE_SIZE_H
#include <stdio.h>

int get_file_size(char* filename){
	FILE* fp = fopen(filename, "r");

	// Go to end of file
	fseek(fp, 0, SEEK_END);
	// Get file size by position
	long int size = ftell(fp);

	printf("%s file size: %ld bytes\n", filename, size);

	rewind(fp);

	fclose(fp);

	return size;

}

#endif

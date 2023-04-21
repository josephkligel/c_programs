#ifndef GET_LINE_COUNT_H
#define GET_LINE_COUNT_H

#include <stdio.h>

	int get_line_count(char* filename){
		// Open file pointer with provided filename
		FILE* fp = fopen(filename, "r");
		// Declare and define line count variable to 0
		int lines = 0;
		// Declare and define empty buffer length and string
		int bufferLength = 255;
		char buffer[255];
		// Count lines in file
		printf("Counting lines of %s...\n", filename);
		while(fgets(buffer, bufferLength, fp)){
			lines++;
		}
		// Close pointer
		fclose(fp);
		// Return line count
		return lines;
	}

#endif

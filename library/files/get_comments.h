#ifndef GET_COMMENTS_H
#define GET_COMMENTS_H
#include <stdio.h>
#include <string.h>
#include "get_line_count.h"
#include <regex.h>

#define LENGTH 255

	int get_comments(char* filename){
		// File pointer for filename
		FILE* fp = fopen(filename, "r");
		// Variables
		char buffer[LENGTH];
		int lineNumber = 0;
		// Regex for comments
		regex_t regex;
		int value = regcomp(&regex, "[/\\*][/\\*].*", 0);
		// Loop through file
		while(fgets(buffer, LENGTH, fp)){
			// Updating line number
			++lineNumber;
			if( !(value = regexec(&regex, buffer, 0, NULL, 0)) ){
				printf("----- Line number %d -----\n", lineNumber);
				printf("Comment: %s\n\n", buffer);
			} 
			// TODO: Add multi-line comment parsing capability
		}

		fclose(fp);

		return 0;
	}

#endif

#include <stdio.h>
#include "./library/now.h"
#include "./library/files/get_line_count.h"
#include "./library/files/get_comments.h"
#include "library/files/get_file_size.h"

int main(int argc, char* arcv[]){
	// Print current time
	//printf("%s\n", now());
	
	// Print line count
	//printf("Line count: %d\n", get_line_count("example.txt"));
	
	//Print comments
	//get_comments("main.c");
	
	get_file_size("stat.c");

	return 0;
}

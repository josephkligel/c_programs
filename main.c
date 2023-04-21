#include <stdio.h>
#include "./library/now.h"
#include "./library/files/get_line_count.h"

int main(int argc, char* arcv[]){
	// Print current time
	//printf("%s\n", now());
	
	// Print line count
	printf("Line count: %d\n", get_line_count("example.txt"));

	return 0;
}

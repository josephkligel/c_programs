#include <stdio.h>
#include <regex.h>

void print_result(int value, char match){
	if(value == 0) printf("Found pattern: %s\n", match);
}

int main(int argc, char *argv[]){
	FILE *fp = fopen(argv[1], "r");
	
	regex_t regex;
	int value = regcomp(&regex, "[:word:]", 0);
	regmatch_t group[3];
	
	char buff[512];

	if(fp != NULL){
		while(fgets(buff, 512, fp) != NULL){
			value = regexec(&regex, (const char *)buff, 0, group, 0);
			for(int i = 0; i < 3; ++i){ 
				print_result(value, group[i].rm_so);
			}
		}
	}



	return 0;
}

#include <regex.h>
#include <stdio.h>

int main(void){

	regex_t regex;

	int value;

	value = regcomp(&regex, "[:word:]", 0);

	if(value == 0){
		printf("RegEx compiled successfully.\n");
	} else printf("Compilation error\n");

	return 0;
}

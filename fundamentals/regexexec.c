#include <regex.h>
#include <stdio.h>

void print_result(int value){
	if(value == 0) printf("Pattern found.\n");
	else if(value == REG_NOMATCH) printf("Pattern not found.\n");
	else printf("An error occured.\n");
}

int main(){
	regex_t regex;

	int value, value2;

	value = regcomp(&regex, "Welcome to GfG", 0);

	value = regexec(&regex,"GeeksforGeeks", 0, NULL, 0);

	value2 = regcomp(&regex, "GeeksforGeeks", 0);

	value2 = regexec(&regex, "GeeksforGeeks", 0, NULL, 0);

	print_result(value);
	print_result(value2);
}

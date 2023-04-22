#include <stdio.h>

int main(int argc, char** argv){
	int c;
	while((c = getchar()) != EOF && c != '\n'){
		getchar();
		printf("You pressed %c\n", c);
	}
	
	return 0;
}

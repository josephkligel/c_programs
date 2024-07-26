#include <stdio.h>

void soup(void){
	puts("Soup!");
}

int main() {
	printf("for breakfast I had ");
	soup();
	printf("for lunch I had ");
	soup();
	printf("for dinner I had ");
	soup();

	return (0);
}

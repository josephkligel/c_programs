#include <stdio.h>

int main() {
	char ch[64];
	printf("Enter message here: ");
	fgets(ch,64, stdin);
	puts(ch);

	return (0);
}

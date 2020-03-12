#include <stdio.h>
#include <ctype.h>

int main() {
	int acter;
	do {
		acter = getchar();
		if (isalpha(acter)){
			putchar(acter);
		}
	}
	while(acter != '\n');
	putchar('\n');

	return (0);
}

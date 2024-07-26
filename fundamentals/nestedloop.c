#include <stdio.h>

int main() {
	char alpha;
	int number;
	for(alpha = 'A'; alpha < 'K'; alpha++){
		for (number = 0; number < 10; number++){
			printf("%c-%d\t", alpha, number);
		}
		putchar('\n');
	}

	return (0);
}

#include <stdio.h>

int main() {
	puts("For loop section");
	for(int x = 1; x <= 20; x++) {
		printf("%d ", x);
	}
	puts("\n\nWhile loop secion");
	int y = -10;
	while(y <= 10) {
		if((y % 2) != 0 ) {
			y++;
		} else {
			printf("%d ", y);
			y++;
		}
	}
	puts("\n");
	return (0);
}

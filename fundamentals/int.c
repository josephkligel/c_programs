#include <stdio.h>

int main(void) {
	int age;
	printf("What's your age? ");
	scanf("%d", &age);
	int days = age * 365;
	printf("You are at least %d days old.\n", days);
}

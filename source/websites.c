#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	puts("What website would you like to go to?");
	puts("1) LinkeIn Learning");
	puts("2) Udemy");
	puts("3) Quora");
	puts("4) Reddit");
	puts("5) Google");
	printf("Type number here: ");
	scanf("%d", &x);
	switch (x) {
		case 1: system("google-chrome 'https://www.linkedin.com/learning/me/in-progress'");
				break;
		case 2: system("google-chrome 'https://www.udemy.com/home/my-courses/learning/'");
				break;
		case 3: system("google-chrome 'https://quora.com'");
				break;
		case 4: system("google-chrome 'https://reddit.com'");
				break;
		case 5: system("google-chrome 'https://google.com'");
				break;
		default: puts("Invalid Input");
	}

	return (0);
}

#include <stdio.h>

int main() {
	int x;
	printf("Type an integer (1, 2, or 3) here: ");
	scanf("%d", &x);
	switch(x){
		case 1:
			puts("Your color is RED");
			break;
		case 2:
			puts("Your color is GREEN");
			break;
		case 3:
			puts("Your color is BLUE");
			break;
		default:
			puts("Really!? You can't even type a simple integer? Go hang yourself!");
			puts(" _______");
			puts("  |     |");	
			puts(" [0]    |");	
			puts(" /|\\    |");	
			puts(" / \\    |");	
			puts("        |");	
			puts("________|");	


}

	return (0);
}

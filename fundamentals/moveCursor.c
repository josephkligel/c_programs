#include <curses.h>
#include <stdio.h>

int main(void){
	clrscr();

	gotoxy(10, 15);

	printf("Current location of x: %d\n", wherex());
	printf("Current location of y: %d\n", wherey());

	return 0;
}

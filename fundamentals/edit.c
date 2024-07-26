#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(int x);

int main() {
	int number;
	char buffer[10000];

	char question[100] = "What reference text would you like to edit?\n";
	char todo[100] = "\t1) Todolist\n";
	char bash[100] = "\t2) Bash Command Reference\n";
	char py[100] = "\t3) Python Index\n";
	char c[100] = "\t4) C Programming Reference";

	strcpy(buffer, question);
	strcat(buffer, todo);
	strcat(buffer, bash);
	strcat(buffer, py);
	strcat(buffer, c);

	puts(buffer);
	scanf("%d", &number);

	check(number);

	return (0);
}

void check(int x){
	switch(x) {
		case 1: system("nano -l $HOME/bin/todolist.txt");
			break;
		case 2: system("nano -l $HOME/bin/bashref.txt");
			break;
		case 3: system("nano -l $HOME/python_programs/pyIndex.txt");
			break;
		case 4: system("nano -l $HOME/cref.txt");
			break;
		default: puts("Invalid Input. Try again");
	}
}


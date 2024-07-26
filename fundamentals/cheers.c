#include <stdio.h>

int main() {
	puts("Everyone gets free dinner!");
	cheers();
	puts("Everyone gets free desert!");
	cheers();

	return (0);
}

void cheers(void){
	int x;
	for(x=0; x < 3; x++) printf("Huzzah! ");
	puts("\n");
}

#include <stdio.h>

int main(int argc, int *argv[]) {
	FILE *fp;
	int value;

	fp = fopen("/home/jkligel/input.txt", "rb");
	if(fp);
	{
		while(1)
		{
			value = fgetc(fp);
			if(value == EOF) break;
			else printf("%c", value);
		}
		fclose(fp);
	}
	return (0);
}

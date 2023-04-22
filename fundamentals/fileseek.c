#include <stdio.h>

int main() {
	FILE *fp;
	int value;
	fp = fopen("/home/jkligel/input.txt", "rb");
	if(fp)
	{
		fseek(fp, 10, SEEK_CUR);
		while(1)
		{	
			value = fgetc(fp);	
			if (value == EOF) break;
			else printf("%c", value);
		}
	}
	fclose(fp);	

	return (0);
}

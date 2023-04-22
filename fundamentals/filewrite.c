#include <stdio.h>

int main(int argc, int *argv[]) {
	FILE *fp;
	int value;
	
	fp = fopen("/home/jkligel/input.txt", "wb");
	if(fp)
	{
		for (value = 48; value < 58; value++)
		{
			fputc(value, fp);
		}
		fclose(fp);
	}	

	return (0);
}

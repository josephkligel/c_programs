#include <stdio.h>

int main(int argc, int *argv[]) {
	FILE *fp;
	fp = fopen("/home/jkligel/output.txt", "wb");
	if(fp)
	{
		fprintf(fp, "This is some text.\n");
		fclose(fp);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char command[128] = "gcc -o /home/jkligel/c_programs/" ;
	char codeName[64];
	char sourceName[64];
	char endFlag[5] = " -lm";
	char buffer[500];
	char callProgram[2000] = "<==========Output of program with cCompiler==========>\n\n/home/jkligel/c_programs/";

	printf("Type codename here: ");
	scanf("%s", codeName);

	printf("Type source file name here: ");
	scanf("%s", sourceName);

	strcpy(buffer, command);
	strcat(buffer, codeName);
	strcat(buffer, " /home/jkligel/c_programs/source/");
	strcat(buffer, sourceName);
	strcat(buffer, endFlag);

	system(buffer);
	strcat(callProgram, codeName);
	system(callProgram);
	return (0);
}

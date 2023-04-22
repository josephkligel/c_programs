#include <stdio.h>

int main(int argc, int *argv[]) {
	int param = 0;
	while (param < argc)
	{
		printf("Parameter %d is %s\n", param, argv[param]);
		param++;
	}

	return (0);
}

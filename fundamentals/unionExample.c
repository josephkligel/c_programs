#include <stdio.h>
#include <string.h>

int main(){
	union Data {
		char string[128];
		int number;
	};

	union Data data;

	strcpy(data.string, "Hello");
	printf("%s\n", data.string);

	return 0;
}

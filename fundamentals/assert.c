#include <assert.h>
#include <stdio.h>

int main(){
	int x;

	printf("Enter an integer: ");
	scanf("%d", &x);

	assert(x >= 100);
	printf("Integer entered is %d\n", x);

	return 0;
}

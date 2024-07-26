#include <stdio.h>

int max(int x, int y);
void isLarger(int big);

int main() {
	int a,b,larger;
	printf("Type two integers seperated by spaces: ");
	scanf("%d %d",&a,&b);
	larger = max(a, b);
	if (a == larger) isLarger(a);
	else isLarger(b);

	return (0);
}

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}

void isLarger(int big) {
	printf("%d is larger.\n", big);
}

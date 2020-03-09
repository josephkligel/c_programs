#include <stdio.h>
#include <math.h>

int main() {
	float a,b;

	printf("Type the first number: ");
	scanf("%f", &a);
	printf("Type the second number: ");
	scanf("%f", &b);
	printf("%f + %f = %f\n", a, b, a+b);
	printf("%f - %f = %f\n", a, b, a-b);
	printf("%f x %f = %f\n", a, b, a*b);
	printf("%f / %f = %f\n", a, b, a/b);

	printf("%f to the power of %f is %f\n", a, b, pow(a,b));
	printf("The squareroot of %f is %f\n", a, sqrt(a));
	printf("And the squareroot of %f is %f\n", b, sqrt(b));

	return (0);
}

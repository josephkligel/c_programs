#include <stdio.h>

const double payRateHr = 18.50;
const double first, second, third = 0.15,0.20,0.25;
const double overTimeMultiplier = 1.5;

int main(void){
	double hours;
	double grossPay;
	double totalTaxes;
	double netPay;

	printf("How many hours did you work for the week in question? ");
	scanf("%lf", hours);

	grossPay = hours * payRateHr;
	for(int i = 0; i < grossPay; ++i){
		while(){

		}
	}

	printf("Gross pay is $%.2f\n", grossPay);
	printf("Total taxes for the week are $%.2f\n", totalTaxes);
	printf("Net pay is $%.2f\n", netPay);

	return 0;
}

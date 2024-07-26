#include <stdio.h>
#include <stdlib.h>

const double minutes_in_years = 365*24*60;
const double minutes_in_days = 24*60;

double convertToYears(double m){
	return m/minutes_in_years;
}

double convertToDays(double min){
	return min/minutes_in_days;
}

int main(int argc, char *argv[]){
	double minutes;
	//sscanf(argv[1], "%lf", &minutes);

	if(argv[1]){
		minutes = atof(argv[1]);
	
	} else {
		printf("Enter the number of minutes to convert: ");
		scanf("%lf", &minutes);
	}

	double years = convertToYears(minutes);
	double days = convertToDays(minutes);
		
	printf("%.2f minutes is %f years (or %.2f days)\n", minutes, years, days);


	return 0;
}

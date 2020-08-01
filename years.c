#include <stdio.h>
int main()
{
	double a,year_min,year;
	printf("Enter the minutes");
	scanf("%lf",&a);
	year_min=60*24*365;
	year=a/year_min;
	printf("Number of years %lf\n", year);

}
#include <stdio.h>
#include<stdlib.h>
int main()
{	
	double hrs,gross,tax;
	printf("Enter the number of hours: ");
	scanf("%lf",&hrs);
	if(hrs<=40)
	
		gross= 12*hrs;
		
	
	else
	{
		gross=(12.00*40)+(18*(hrs-40));
	}
		
	
	if(gross<=300)
	{
		tax=(15/100)*gross;
	}
		
	
	else if(gross>300 && gross<=450)
	{
		tax=(20/100)*gross;
	}
		
	
	else
	{
		tax=(25/100)*gross;
			
	}
	
		printf("Gross salary is: %lf\n",gross);
		printf("tax is: %i\n",tax);
		return 0;
	}
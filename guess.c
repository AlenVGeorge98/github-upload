#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{	int num;
	time_t t;
	srand((unsigned)time(&t));
	int randomNumber=rand()%21;
	printf("This is a guessing game\n");
	printf("I have choosen a number between 0 and 20 which you must guess\n");

	  for(int i=5;i>0;--i)
	  {
	  	printf("No of attempts left: %d\n", i);
	  	printf("Guess a number\n");
	  	scanf("%d",&num);
	  	
	 		if(num==randomNumber)
	 		{
	 			printf("Congradulations! U guessed the correct Number\n");
	 			return 0;
	 		}
	 		else if(num<0||num>20)
	 			printf("Please enter number between 0 and 20\n");
	 		else if(num>randomNumber)
	 			printf("My number is less than your guess\n");
	 		else if(num<randomNumber)
	 			printf("My number is greater than your guess\n");
	 		}
	 		printf("No More Chances\n");

return 0;
}
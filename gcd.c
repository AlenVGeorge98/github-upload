#include <stdio.h>

int gcd(int a, int b)
{
	int c;
  for(int i=1; i<=a && i<=b; i++)
  {
  	if(a%i==0 && b%i==0)
  		c=i;
  }
printf("The gcd is %d\n",c);
  
}
float abso(float num)
{	float absolute;
	if(num<0)
		absolute= -1*num;
	else
		absolute=num;

	printf("Absolute value is%f\n", absolute);

}
int sqrRoot(float n)
{

}

int main()
{
	gcd(150,35);
	abso(23);
	return 0;
}
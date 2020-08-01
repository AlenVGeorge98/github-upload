#include<stdio.h>
#include<stdlib.h>

int sqr(int *num)
{
	int sr=*num**num;

	return sr;
}
int main()
{	int a=10;
	
	printf("%d\n", sqr(&a));
}
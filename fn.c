#include <stdio.h>
#include <string.h>
 int main()
{	int n,i;
	char ar[25][50];
	printf("Enter the number of strings\n");
	scanf("%d",&n);
	printf("Enter %d strings\n",n );
	for(i=0;i<n;i++)
	{
	scanf("%s", ar[i]);
}
return 0;
}
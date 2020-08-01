#include <stdio.h>
#include<string.h>
int main()
{	int n,i;
	char arr[100];
	printf("Enter the size of string");
	scanf("%d", &n);
	printf("Enter the string");
	scanf("%s", arr);
	for(i=0;i<n;i++)
	{
		if (arr[i]==arr[n-i])
		{
			printf("pallindrome");
					/* code */
		}
		else
			printf("not");
	}

}
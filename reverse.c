#include <stdio.h>
#include<string.h>

int main()
{	char str[200];
	char str2[200];
	int start, end=0;

	scanf("%s", str);
	int length=strlen(str);
	end=length-1;
	for(start=0;start<length;start++)
	{
		str2[start]=str[end];
		end--;
	}
	str2[start]='\0';
	printf("%s\n",str2 );




	return 0;
}
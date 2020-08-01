#include<stdio.h>
#include<stdlib.h>

int strleng(const char *string)
{
	const char *lastaddr=string;
	while(*lastaddr)
	
		++lastaddr;

		return lastaddr-string;
}
 int main()
{
	int strleng(const char *string);
	printf("%d\n", strleng("hi how are you"));
	return 0;
}

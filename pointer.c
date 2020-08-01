#include <stdio.h>
#include<stddef.h>
 int main()
{
	int num=90;
	int *p=NULL;
	p=&num;
	printf("The Number is %d\n", num);
	printf("The address of the Number is %p\n",&num);
	printf("The value of pointer is %d\n", p);
	printf("The value that pointer points to is %d\n", *p);
	printf("The address of pointer is %p\n", (void*)&p);
	printf("The size of pointer is %d\n", sizeof(p));

	return 0;
}
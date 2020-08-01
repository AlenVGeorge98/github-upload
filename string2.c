#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int stringlength(char string[]);
void concat(char string1[], char string2[], char string3[]);

int stringlength(char string[])
{	int count=0;
	while(string[count] != '\0')
		count++;

		return count;
	}
void concat(char string1[], char string2[], char string3[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
		string3[i]=string1[i];

	for(j=0;string1[j]!='\0';j++)
		string3[i+j]=string2[j];

	string3[i+j]='\0';

}

int main()
{
	char word1[]="Hello hi";
	char string1[]="First String";
	char string2[]="Second String";
	char string3[100];
	printf("word length is %d", stringlength(word1));
	concat(string1,string2, string3);
	printf("COncatinated string is %s\n",string3 );
	return 0;

}
#include <iostream>
#include <string.h>
#include<stdio.h> 
using namespace std;
int main()
{
	char strn[200];
	cout<<"Enter the string: ";
    gets(strn);
	int sum=0;
	int space=0;
	int consonants=0;

 for(int i=0;strn[i]!='\0';i++)
 {
	if(strn[i]=='a' || strn[i]=='e' || strn[i]=='i' || strn[i]=='o' || strn[i]=='u' || strn[i]=='A' || strn[i]=='E' || strn[i]=='I' || strn[i]=='O' ||
	 strn[i]=='U')
	 {
	
		sum++;
	 } 
	 else if (strn[i]==' ')
	 {
	  space++; 
	 }
	 else
        {
            ++consonants;

	    }
    }
 cout<<"The count of vowels are "<<sum<<endl;
 cout<<"The count of spaces are "<<space<<endl;
 cout<<"The count of consonants are "<<consonants;
 return 0;

}

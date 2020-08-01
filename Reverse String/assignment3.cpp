
#include<stdio.h> 
#include<string.h> 
#include<iostream>
using namespace std;

void reverse(char str[], int start, int end) {

	
	char temp; 
	while (start <= end) 
	{ 
		 
		temp = str[start]; 
		str[start] = str[end]; 
		str[end] = temp; 
		start++; 
		end--; 
	} 
} 


void reverseletter(char str[], int start, int end) {
			
	int start1, end1; 
	for (start1 = end1 = start; end1 < end; end1++) {
					
		if (str[end1] == ' ') 
			continue; 
			
		
		while (str[end1] != ' ' && end1 <= end)
			end1++;
		end1--;
		
		
		reverse(str, start1, end1); 
	} 
} 


int main() 
{
	char str[1000];
	cout<<"Enter the string: ";
	gets(str);
	reverseletter(str, 0, strlen(str)-1); 
	cout<<str; 
	return 0; 
} 

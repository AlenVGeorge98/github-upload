
// Write a function to find the largest and smallest number in an array. 

#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
  int ar[100],smallest, largest,i,n;
  cout<<"Enter the size of array: ";
  cin>>n;
  cout<<"Enter the array: ";

  for(i=0;i<n;i++)
   cin>>ar[i];

 smallest= ar[0];
 largest= ar[0];

    for(i=0;i<n;i++)
    {
         if(ar[i]<smallest)
         smallest=ar[i];
    }

    for(i=0;i<n;i++)
    {
        if(ar[i]>largest)
        largest=ar[i];
    }
 cout<<"Smallest number is: "<<smallest<<endl;
 cout<<"Largest number is: "<<largest;

}
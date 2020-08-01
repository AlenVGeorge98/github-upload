// CPP program to check given number number y 
// is power of x 
#include <stdio.h> 
#include <math.h> 
#include<stdbool.h>
using namespace std; 

bool isPower(int x, int y) 
{ 
	// logarithm function to calculate value 
	int res1 = log(y) / log(x); 
	double res2 = log(y) / log(x); // Note : this is double 

	// compare to the result1 or result2 both are equal 
	return (res1 == res2); 
} 

// Driven program 
int main() 
{ 
	cout << isPower(27, 729) << endl; 
	return 0; 
} 

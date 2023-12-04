// C program to find largest among four 
// numbers using ternary operator

#include <stdio.h>

int main()
{
	// variable declaration
	int n1 = 20, n2 = 21, n3 = 10, n4 = 210, max;
	
	// Largest among n1, n2, n3 and n4
	    (n1 > n2 && n1 > n3 && n1 > n4) ? printf("n1 is max") : 
	    (n2 > n3 && n2 > n4) ? printf("n2 is max") : 
		(n3 > n4) ? printf("n3 is max") :
		printf("n4 is max");
	
	// Print the largest number
//	printf("Largest number among %d, %d, %d and %d is %d.",n1, n2, n3, n4, max);

	return 0;
}


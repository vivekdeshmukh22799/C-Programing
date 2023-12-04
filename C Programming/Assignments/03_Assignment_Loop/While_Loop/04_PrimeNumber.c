//Check number is prime or not
#include <stdio.h>
void main (){
	int i=2, n, a=0;
	printf("Enter any number = ");
	scanf("%d",&n);
	
	while(i<=n/2)
   {
	if (n%i==0){
		a=1;
		break; 	
    }	
	    i++;
    }
    if(n==1) printf("1 is neither prime nor composite");
	else if(a==0) printf("the given number is prime");
	else printf("the given number is composite");	
	}

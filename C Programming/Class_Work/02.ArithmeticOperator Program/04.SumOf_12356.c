#include <stdio.h>
void main(){
	int num=12356;
	printf("Big digit is : %d", num);
	
	int a=num%10; //out will be 6
	printf("\n value of a is : %d",a);
	
	int b=num/10; //out will be 1235
	printf("\n value of b is : %d",b);
	
	int c=b%10; //out will be 5
	printf("\n value of c is : %d",c);
	
	int d=b/10; //out will be 123
	printf("\n value of d is : %d",d);
	
	int e=d%10; //out will be 3
	printf("\n value of d is : %d",e);
	
	int f=d/10; //out will be 12
	printf("\n value of f is : %d",f);
	
	int i=f%10; //out will be 2
	printf("\n value of i is : %d",i);
	
	int j=f/10; //out will be 2
	printf("\n value of j is : %d",j);
	
	int z=a+c+e+i+j;
		printf("\n Sum of the value of bigdigits is : %d",z);
	
	
}

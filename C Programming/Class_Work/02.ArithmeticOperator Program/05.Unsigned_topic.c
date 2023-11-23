#include <stdio.h>
void main (){
	
    int num1=10, num2=15;
	
	//unsigned 
	int sub1=num1-num2;   //%u for unsigned value
	
	printf("\n subtraction of %d and %d is %d \n ", num1, num2, sub1 );
	
	

    int sum= num1 +num2;
    int sub=num1-num2;
    int mul=num1*num2;
    
	printf("\n addition of %d and %d is %d \n ", num1, num2, sum );
	printf("\n subtraction of %d and %d is %d \n ", num1, num2, sub );
    printf("\n multiplication of %d and %d is %d \n ", num1, num2, mul );

	int num=5845, den=18;
	int div=num/den;
	int rem=num%den;
	
	printf("\n Division of of %d and %d is : %d \n " , num , den, div);
    printf("\n Remainder of of %d and %d is : %d \n " , num , den, rem);
	
	// for printing data types bytes
	printf("\n size of data type is : %d", sizeof(float));
	
	//int = -32768 to +32767
	// unsigned int = 0 to 65535
	// short int = -32768 to +32767
	
}

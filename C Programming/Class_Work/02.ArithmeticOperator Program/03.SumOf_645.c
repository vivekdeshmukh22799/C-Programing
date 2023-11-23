#include <stdio.h>
void main(){
	int num=645;
	printf(" big digit value of num : %d \n",num);

	int a=num%10; // output will be 5
	printf("value of a : %d",a);
	
	int b=num/10; // output will be 64
    printf("\nvalue of b : %d",b);
    
    int c=b%10; // output will be 4
    printf("\nvalue of c : %d",c);
     
    int d=b/10; // output will be 6
    printf("\nvalue of d : %d",d);
	
	int e=a+c+d;
	printf("\nsum of a + c + d = %d",e);
}

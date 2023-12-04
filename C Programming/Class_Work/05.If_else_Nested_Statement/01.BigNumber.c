#include <stdio.h>
void main(){
	int num1,num2,num3;
	
	printf("Enter num1 = ");
	scanf("%d",&num1);
	
	printf("Enter num2 = ");
	scanf("%d",&num2);
	
	printf("Enter num3 = ");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("\nnum 1 is grater");
		}
		else {
			printf("\nnum1 is NOT grater");
		}
	}
	else {
		if(num2>num3){
			printf("\nnum2 is grater");
		}
		else{
			printf("\nnum3 is grater");
		}
	}			
}

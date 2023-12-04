#include <stdio.h>
//Check if the given number is even or odd
void main(){
	int num;
	printf("Enter number = ");
	scanf("%d",&num); //10
	
	if (num/2!=0){
		printf("\n%d is ODD number",num);
	}
	else{
		printf("\n%d is EVEN number",num);
	}
}

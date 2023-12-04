#include <stdio.h>
void main (){
	int num;
	printf("Enter any number = ");
	scanf("%d",&num);
	
	if (num > 0){
		printf("%d is positive number",num);
	}
	else {
		printf("%d is NEGATIVE number",num);
	}
}

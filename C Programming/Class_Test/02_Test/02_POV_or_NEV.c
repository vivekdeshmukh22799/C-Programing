#include <stdio.h>
void main (){
	int num;
	printf("Enter NUMBER = ");
	scanf("%d",&num);
	
	if (num==0){
		printf("\n %d is NEUTRAL number",num);
	} 
	else if (num>=1){
		printf("\n %d is POSITIVE number",num);
	}  else {
			printf("\n %d is NEGATIVE number",num);
	} 
}

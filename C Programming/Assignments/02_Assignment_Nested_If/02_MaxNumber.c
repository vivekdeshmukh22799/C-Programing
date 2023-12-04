#include <stdio.h>
void main() {
int n1, n2, n3;
printf("Enter number n1 =");
scanf("%d",&n1);

printf("Enter number n2 =");
scanf("%d",&n2);

printf("Enter number n3 =");
scanf("%d",&n3);

if (n1>n2){
	if(n1>n3){
	printf("n1 is greater");
	} 
	else {
	printf("n3 is greater");
	}
}
 else {
	if (n2>n3){
		printf("n2 is greater");
	}
	else {
		printf("n3 is greater");
	}
}
}

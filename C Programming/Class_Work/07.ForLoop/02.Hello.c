#include <stdio.h>
//print hellow world n times take input from user
void main(){
	
	int n, i;
	printf("Enter value = ");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
		
		printf("\n%d Hello",i);
	}
}

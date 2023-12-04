#include <stdio.h>
void main (){
	int i=1,n,a;
	printf("Enter any number = ");
	scanf("%d",&n);	
	while(i<=10){
		a=i*n;
		printf("\n%d * %d = %d",i,n,a);
		i++;
	}
}

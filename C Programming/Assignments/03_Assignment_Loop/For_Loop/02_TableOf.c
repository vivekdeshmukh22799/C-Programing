#include <stdio.h>
void main (){
	int i,n,a;
	
	printf("Enter any number = ");
	scanf("%d",&n); //2
	
	for(i=1; i<=10; i++){
	//	printf("\n%d inside",i);
		a=i*n;
		
		printf("\n%d * %d = %d",i,n,a);
	}
	printf("\n%d outside",i);
}

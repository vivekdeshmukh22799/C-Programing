#include<stdio.h>
// print 1,3,5,7,9,.... nth numbers
void main (){
	int i, n;
	printf("Enter nth number = ");
	scanf("%d",&n);
	
	for (i =1; i<=2*n-1; i=i+2){
		printf("\n%d",i);
	}
}

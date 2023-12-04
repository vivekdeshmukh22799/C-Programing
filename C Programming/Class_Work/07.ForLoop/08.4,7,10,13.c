#include<stdio.h>
// print 4,7,10,13,.... nth numbers
int main (){
	int i, n, a;
	printf("Enter nth number = ");
	scanf("%d",&n);
	
//	for (i =4; i<=3*n-1; i=i+3){
//		printf("\n%d",i);
//	}
	for (i =4; i<=n; i++){
		a=a+3;
		printf("\n%d",a);
	}
}

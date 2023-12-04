#include <stdio.h>
void main (){
	int a=1, b=1, sum=0, i,n;
	printf("Enter num =");
	scanf("%d",&n);
	
	for(i=1; i<=n-2; i++){
		sum=a+b;
		a=b;
		b=sum;	
	}
	printf("\n%d febonacci number is %d",n,sum);
}

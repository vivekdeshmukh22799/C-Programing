#include<stdio.h>
//100,97,94,91,88... nth 
int main (){
	int i, n;
	printf("Enter nth number = ");
	scanf("%d",&n);
	
	int  a=100;
	for (i=1; i<=n; i++){
	
		a= a-3;
		printf("\n%d",a);
	}
	
}

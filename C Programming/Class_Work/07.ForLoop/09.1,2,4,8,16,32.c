#include<stdio.h>
//1,2,4,8,16,32,.... nth 
int main (){
	int i, n, a=1;
	printf("Enter nth number = ");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
	
		a= a*2;
		printf("\n%d",a);
	}
	
}

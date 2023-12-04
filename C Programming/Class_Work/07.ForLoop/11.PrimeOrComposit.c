#include <stdio.h>
void main(){
	int i,a,n;
	printf("Enter nth number = ");
	scanf("%d",&n);
	a=0;
	for (i=2; i<=n-1; i++){
		if(n%i==0){
			a=1;
			break;
		}
	}
	if(n==1) printf("1 is nither prime nor composite");
	else if(a==0) printf("the given number is prime");
	else printf("the given number is composite");
}

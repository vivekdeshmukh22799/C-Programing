//count of given digit
#include <stdio.h>
void main(){
	int n, count=0;
	printf("Enter any number =" );
	scanf("%d",&n);
	
	while (n!=0){
		n=n/10;
		count++;	
	}
	printf("%d",count );
}

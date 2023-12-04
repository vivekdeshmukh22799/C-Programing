//count of given digit
#include <stdio.h>
void main(){
	int n, count=0;
	printf("Enter any number =" );
	scanf("%d",&n);
	
	for (count=0; n!=0; count++){
		n=n/10;
			
	}
	printf("%d",count );
}

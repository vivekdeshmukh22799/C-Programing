#include <stdio.h>
void main (){
	int a,b,c, max;
	printf("Enter value of a, b, c =\n");
	scanf("\n%d%d%d",&a,&b,&c);
	
	printf("\n%d\n%d\n%d",a,b,c);

    max = (a>b && a>c) ? a : (b>c) ? b : c;
	printf("%d is max value",max);
}

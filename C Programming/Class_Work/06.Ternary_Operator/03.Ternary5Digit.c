#include <stdio.h>
void main (){
	int a,b,c,d,e;
	printf("Enter any 5 numbers = \n");
	scanf("\n%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("\nA=%d,B=%d,C=%d,D=%d,E=%d",a,b,c,d,e);
	
	(a>b && a>c && a>d && a>e) ? printf("\nA is max"):
		(b>c && b>d && b>e) ? printf("\nB is max"):
			(c>d && c>e) ? printf("\nC is max"):
				(d>e) ? printf("\nD is max"):
					printf("\nE is max");
						
}

#include <stdio.h>
void main (){
	int year;
	printf("Enter year = ");
	scanf("%d",&year);
	
	if ((year%4==0 && year%100!=0 ) || (year%400==0)) {
			printf("%d year is Leap year",year);
	}
	else {
			printf("%d year is NOT Leap year",year);
	}
}

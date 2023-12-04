#include <stdio.h>
void main() {
	int hr, min, sec, hr_sec, min_sec, total_sec;
	printf("Enter Hours = ");
	scanf("%d",&hr);
	
	printf("Enter Minutes = ");
	scanf("%d",&min);
	
	printf("Enter Seconds = ");
	scanf("%d",&sec);
	
	//convert hr to sec
	hr_sec=hr*3600;
	
	//convert min to sec
	min_sec=min*60;
	
	total_sec= hr_sec + min_sec + sec;
	printf("Total sec of %dhr:%dmin:%dsec =  %dsec",hr,min,sec,total_sec);
	
}

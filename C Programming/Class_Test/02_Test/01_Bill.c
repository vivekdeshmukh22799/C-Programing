#include <stdio.h>
void main (){
	int units, rs, pay;
	printf("Enter Units of Electricity = ");
	scanf("%d",&units);
	
	if (units>=1){
		pay=units*30;
		printf("\nFor %d units you need to pay %d RS only",units,pay);
	} 
	else if (units>=51 && units <=150){
		pay=units*40;
		printf("\n%d units you need to pay %d RS only",units,pay);
	}  else {
		pay=units*50;
		printf("\n%d units you need to pay %d RS only",units,pay);
	} 
}



#include <stdio.h>
void main(){
	int cost_item=1000;
	int discount= 10; //disc will be in %
	int discount_price = 1000*10/100;
	
	int net_pay= cost_item-discount_price;
	printf("%dRs net_pay",net_pay);
	
	
}

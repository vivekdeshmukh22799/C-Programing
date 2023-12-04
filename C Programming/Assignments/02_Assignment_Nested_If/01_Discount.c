#include <stdio.h>
//Find the price of item when discount is given 
//(specify different discount based on price)

void main(){
	float mrp_price, net_pay, selling_price, discount;
	
	printf("Enter MRP price of item = ");
	scanf("%f",&mrp_price);
	
	printf("Enter percentage of discount = ");
	scanf("%f",&discount);
	
	selling_price= mrp_price*discount/100;
	printf("Selling price is %.2f",selling_price);
	
	net_pay= mrp_price - selling_price;
	
	printf("\nNet pay price is %.2f Rs",net_pay);
	
	if (discount>=50 && discount<=60) {
		printf("\nYou got max %.2f %% discount and pay just %.2f Rs", discount,net_pay);
	}
	else {
		if(discount>=20 && discount<=49) {
			printf("\nYou got min %.2f %% discount and pay just %.2f Rs", discount,net_pay);
		}
		else {
			printf("\nUff you are not eligible for discount");
		}	
	}
}

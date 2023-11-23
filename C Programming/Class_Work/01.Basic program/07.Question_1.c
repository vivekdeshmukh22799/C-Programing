#include <stdio.h>
void main (){
     float product_price=987;
    int discount=25;
    float discount_price = product_price * 25/100;
    float price_pay= product_price - discount_price;
    printf("\ndiscount price %.2f", discount_price);
    printf("\nPrice to pay for product %.2f", price_pay);
}
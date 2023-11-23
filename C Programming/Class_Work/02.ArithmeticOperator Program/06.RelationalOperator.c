#include <stdio.h>
void main() {

    // float a=2.2, b=6.1;
    // float c=a+b;
    // printf("%f",c);

    // int d=10, e=10;
    // int f=d>e;
    // printf("\n d is greater than e : %d",f);

    // int i=d>=e;
    // printf("\n d greater than equals to e : %d",i);

    // int g=d<e;
    // printf("\n d is less than e : %d",g);

    // int j=d<=e;
    // printf("\n d is less than equals to e : %d",j);

    // int k=d != e;
    //  printf("\n d is not equals to e : %d",k);

    // int L= d == e;
    // printf("\n d == e : %d", L);


    //Increment and decrement operator

    int p=13;

    int q = ++p;    // increment 1st then assigned
    printf("\n p value is %d and now q value is %d :", p, q);

    int r = q++;    // assigned 1st then increment
    printf("\n q value is %d and now r value is %d :", q, r);

    int s = --r;    // decrement 1st then assigned 
    printf("\n r value is %d and now s value is %d :", r, s);

    int t = s--;    // assigned 1st then decrement
    printf("\n s value is %d and now t value is %d :", s, t);

}

#include <stdio.h>
void main() {
// int c=a + b; //Error is showing why ?
int a=50, b=10;
int c=a + b;
int d=a - b;
int e=a * b;
int f=a / b;
int g=a % b;

printf("Addition of %d + %d = %d",a,b,c);

printf("\nSubtraction of %d - %d = %d",a,b,d);

printf("\nMultiplication of %d * %d = %d",a,b,e);

printf("\nDivision of %d / %d = %d",a,b,f);

printf("\nRemainder of %d %% %d = %d",a,b,g);

}

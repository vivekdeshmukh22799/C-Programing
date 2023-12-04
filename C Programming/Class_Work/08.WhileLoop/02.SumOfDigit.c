//write a c program to calculate sum of digit
#include<stdio.h>
void main()
{
  int number,digit,sum=0;
  printf("Enter a number:  ");
  scanf("%d",&number); 
   
  while (number>0){
    digit=number%10;
    sum=sum+digit;
    number=number/10;  
  }
  printf("\nSum of digits = %d",sum);
}

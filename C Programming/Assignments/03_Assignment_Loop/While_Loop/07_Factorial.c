#include<stdio.h>
void main()
{
  int num,factorial, i=1;
  factorial =1;
  printf("Enter the number: ");
  scanf("%d",&num);
  
  while( i<=num)
  {
    factorial=factorial*i;  
     i++;
  }
  printf("The number is factorial number %d",factorial);
}

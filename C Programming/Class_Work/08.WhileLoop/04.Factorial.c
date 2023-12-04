#include<stdio.h>
void main()
{
  int num,factorial, i;
  factorial =1;
  printf("Enter the number: ");
  scanf("%d",&num);
  
  for( i=1; i<=num; i++)
  {
    factorial=factorial*i;  
  }
  printf("The number is factorial number %d",factorial);
}

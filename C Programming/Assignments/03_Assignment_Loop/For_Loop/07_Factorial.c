#include<stdio.h>
void main()
{
  int num,factorial, i;
  factorial =1;
  printf("Enter the number: ");
  scanf("%d",&num);
  
  for( i=1; i<=num; i++)
  {
  	printf("\n\n0)value factorialof  %d",factorial);
  	
    factorial=factorial*i;
	  
    printf("\n1)value of i %d",i);
    printf("\n2)value of factorial after operation %d",factorial);
  }
  printf("\nout side value of i %d",i);
  printf("\nThe number is factorial number %d",factorial);
}

//odd number
#include<stdio.h>
void main()
{
  int a=0;
  printf("\n The odd number are: ");
  while(a<=10)
  {
    a++;
    if(a%2!=0)
    printf("\n %d",a);
  }
}

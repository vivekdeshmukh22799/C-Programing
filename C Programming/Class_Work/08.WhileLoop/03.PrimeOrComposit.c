#include<stdio.h>
void main()
{
  int n,i,count=0;
  printf("Enter number to cheak its prime or composite:  \n");
  scanf("%d",&n);
  i=2;
  while(i<=n/2)
  {
    if(n%i==0)
    {
      count=1;
      break;
    }
    i++;   
  }
  if(n==1) printf("\n1 is NITHER PRIME NOR COMPOSITE");
   else if(count==0) printf("\n%d is a PRIME number",n);
   else printf("\n%d is COMPOSIT number",n);
}

#include <stdio.h>
void main (){
 int n=1234,add;
// printf("Enter Number = ");
// scanf("%d",&n);
int r=0; 
  while (n>0){
 	r=r*10;
 	r=r+(n%10); 
 	n=n/10;	    	
  }  
    printf("\nReverse number is = %d",r);
}

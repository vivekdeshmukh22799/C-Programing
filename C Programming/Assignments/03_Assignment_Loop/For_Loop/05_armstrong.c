	#include <stdio.h>
	void main(){
	    int num,r,sum=0,temp;
      printf("Input  a number = ");
      scanf("%d",&num);
//	    num = 153;
	    for(temp=num; num!=0; num=num/10){
	         r=num % 10;
//	         printf("\n1)%d  r value",r);
	         sum=sum+(r*r*r);
//	         printf("\n2)%d sum value",sum);
//	         printf("\n3)%d num value",num);
	    }
//	     printf("\n\n4)%d num outside value",num);
	    
	    if(sum==temp)
	         printf("\n\n%d is an Armstrong number",temp);
	    else
	         printf("\n\n%d is not an Armstrong number",temp);
	}

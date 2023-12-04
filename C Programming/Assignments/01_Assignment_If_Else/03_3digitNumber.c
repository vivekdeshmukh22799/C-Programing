#include <stdio.h>
//Accept a 3 digit number from user and find the sum of the digits and also
//reverse the number
void main (){
	int num=543, sum, reverse;
//	printf("Enter 3 digit number = "); 
//	scanf("%d", &num);
	
    sum =num%10;        // 3 it will print  remender
    printf("\n%d",sum); 
    int sum1=num/10;    // 54 it will print quotient
     printf("\n%d",sum1);
    int sum2=sum1%10;   //4
    printf("\n%d",sum2);
    int sum3=sum1/10;  //5
     printf("\n%d",sum3);
     
    int rev1=sum*100, rev2=sum2*10, rev3=sum3;
   
    int total_sum=sum3+sum2+sum;  
    //printf("total sum = %d",total_sum);
   
	if( total_sum >=0 && total_sum <=27 && num<=999 && num>=100) { 
	  
		 printf("\nSum of %d digit is = %d", num, total_sum);
         // printf("\nReverse digit is = %d%d%d",sum,sum2,sum3);
	     printf("\nReverse digit is = %d",rev1+rev2+rev3);
    } 
    else {
		printf("\nEntered Digit is NOT 3 digit number");
	}	
}

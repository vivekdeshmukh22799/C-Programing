#include <stdio.h>
void main(){
int marks;
printf("Enter marks out of 100 = ");
scanf("%d",&marks);

if (marks>=91){
	if(marks<=100){
		printf("grade A");
	  }
	else{
	    printf("Invalid marks");
    }

    }
   else{
   	if (marks>=81){
   		printf("grade B");
	   }
	   else{
	   	printf("grade C");
	   }
   	}
}	

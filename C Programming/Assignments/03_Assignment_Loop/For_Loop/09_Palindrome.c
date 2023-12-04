#include <stdio.h>
int main(){
    int num, r, sum = 0, t;

    printf("Input a number: "); 
    scanf("%d", &num); 

  // reversed integer is stored in reversed variable
    for(t = num; num != 0; num = num / 10){ 
         r = num % 10; 
         sum = sum * 10 + r; 
    }

    if(t == sum) 
         printf("%d is a palindrome number.\n", t); 
    else
         printf("%d is not a palindrome number.\n", t); 
		  return 0; 
}

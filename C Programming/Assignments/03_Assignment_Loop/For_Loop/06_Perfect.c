#include <stdio.h>
int main()
{
    int num, rem, sum = 0, i;
 
//    printf("Enter a Number: ");
//    scanf("%d", &num);
    num=6;
    for (i = 1; i <= (num - 1); i++)
    {
    rem = num % i;
//    printf("\n\n1)%d rem value ",rem);
	   if (rem == 0){
            sum = sum + i;
 //           printf("\n2)%d sum value ",sum);
        }
//        printf("\n3)%d i value ",i);
    }
//    printf("\n4)%d i outside value ",i);
    if (sum == num)
        printf("\n%d is perfect number", num);
    else
        printf("\n%d is NOT a perfect number", num);
    return 0;
}

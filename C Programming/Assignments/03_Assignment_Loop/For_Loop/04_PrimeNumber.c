#include <stdio.h>
int main() {
 int n, i, count = 0;
    printf("Enter number to check PRIME or COMPOSITE = ");
    scanf("%d",&n); //6
 
    for(i=2; i<=n/2; i++)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }  	
    if(n==1)printf("\n1 is nither PRIME nor COMPOSITE");
    else if (count==0) printf("\n%d is a PRIME number",n);
    else printf("\n%d is COMPOSITE number",n);  
}

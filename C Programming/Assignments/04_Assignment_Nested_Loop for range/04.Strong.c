//4. check strong number in the given range 1 to n?
#include<stdio.h>
void main() {
    int n,r,i,l;
    printf("Enter the number = ");
    scanf("%d",&n);
    
    printf("\n Strong numbers are :");
    
    for(i=1; i<=n; i++) {
        int sum=0;
        int k=i;
        
        while(k!=0) {
        	int  fact=1;
            r=k%10;
            for(l=1; l<=r; l++) {
                fact=fact*l;
            }
            sum=sum+fact;
            k=k/10;
        }
        if(sum==i) {
            printf("%d ",i);
        }

    }

}

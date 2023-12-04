#include <stdio.h>
void main (){
	int num, num1, num2, num3;
	 num = 223410;
	 num1=num%10;
	 printf("\n%d",num1);
	
	 num2=num/10;
	printf("\n%d",num2);
		
	 num3=num2%10;
	printf("\n%d",num3);
	
	printf("\nOUTPUT = %d%d",num3,num1);
}

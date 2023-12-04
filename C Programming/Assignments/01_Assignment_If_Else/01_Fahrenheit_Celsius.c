#include <stdio.h>
void main (){
    float celsius, fahrenheit;
//  printf("Enter fahrenheit temperature : ");
//    scanf("%f", &fahrenheit);
//    printf("\nFahrenheit temp is = %.2f",fahrenheit);
	    
	//convert fahrenheit=10 to celsius
	fahrenheit=10;
	celsius = (fahrenheit - 32) * 5/9;	
	printf("\nConverted into celsius is = %.2f",celsius);		
}

#include <stdio.h>
//Finding area and perimeter of rectangle or circle
void main (){
	
	float area, length, width, perimeter;
	printf("Enter length = ");
    scanf("%f",&length);
    
    printf("\nEnter width = ");
    scanf("%f",&width);
    
    //calculate area
    area=length*width; //10*20
    printf("\nArea of rectangle is = %.2f",area);    
	
	//calculate perimeter
	perimeter=2*(length+width);
	printf("\nPerimeter of rectangle is = %.2f", perimeter);	
}

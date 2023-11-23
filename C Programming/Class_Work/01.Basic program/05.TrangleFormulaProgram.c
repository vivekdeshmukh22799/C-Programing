#include <stdio.h>
void main (){

    int base=7, height=9, side=5, area, Perimeter;
    // Area of a Triangle, A = 1/2 × b × h
    area=(base*height)/2;
    printf("Area of a Triangle = %d",area);

    // Perimeter of a Triangle
    Perimeter=base+side+side;
    printf("\nPerimeter of a Triangle = %d",Perimeter);
}
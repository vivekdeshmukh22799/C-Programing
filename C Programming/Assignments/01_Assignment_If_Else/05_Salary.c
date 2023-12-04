#include <stdio.h>
void main() {
    // Declare variables
    float basic, da, ta, hra, totalSalary;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basic);            //6000

    // Check the condition and calculate allowances accordingly
    if (basic <= 5000) {
        da = basic*10/100;
        ta = basic*20/100;
        hra =basic*25/100;
    } 
	
	else {
        da = basic*15/100;
        ta = basic*25/100;
        hra =basic*30/100;
    }
    
    // Calculate total salary
    totalSalary = basic + da + ta + hra;

    // Display the result
    printf("\nBasic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", totalSalary);
 
}


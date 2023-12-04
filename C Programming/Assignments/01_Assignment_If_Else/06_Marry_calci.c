#include <stdio.h>
//Write a program to check if person is eligible to marry or not 
//(male age >=21 and female age>=18).
void main (){
	int male_age, female_age;
	
	printf("Enter MALE age = ");
	scanf("%d", &male_age);
	
	printf("\nEnter FEMALE age = ");
	scanf("%d", &female_age);
	
	if (male_age>=21 && female_age>=18 ){
		printf("\nMale and Female both can marry");
	}
	else {
		printf("\nUfff.. Male and Female can NOT marry");
	}
	
}

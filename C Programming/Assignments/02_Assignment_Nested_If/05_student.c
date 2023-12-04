#include <stdio.h>

int main() {
    float  discount, price;
    int quantity;
    char Student;

    // Accept the price and quantity from the user
    printf("Enter the price of item : ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Ask if the user is a student
    printf("Are you a student? (y/n): ");
    scanf(" %c", &Student);

    // Calculate discount based on user type and purchase amount
    if (Student == 'y') {
        if (quantity > 500) {
           // discount = 20;
            printf("You got 20%% discount");
        } else {
           // discount = 10;
           printf("You got 10%% discount");
        }
    } else {
        if (quantity > 600) {
           // discount = 15;
           printf("You got 15%% discount");
        } else {
           // discount = 00;
            printf("BAD LUCK..! No discount");
        }
    }
    return 0;
}

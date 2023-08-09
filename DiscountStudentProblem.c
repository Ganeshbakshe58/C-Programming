// WAP to accept Cost Price from user and ask whether the user is a student or not. If the user is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%. (Take all inputs from USER)
#include <stdio.h>
int main() {
    float costPrice, discountRate;
    char isStudent;

    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &isStudent);

    if (isStudent == 'Y' || isStudent == 'y') {
        if (costPrice > 500) {
            discountRate = 0.1; // 10% discount
        } 
        else {
            discountRate = 0.05; // 5% discount
        }
    } 
    else {
        if (costPrice > 500) {
            discountRate = 0.08; // 8% discount
        } 
        else {
            discountRate = 0.02; // 2% discount
        }
    }

    float discountPrice = costPrice * discountRate;
    float finalPrice = costPrice - discountPrice;

    printf("Discount Price: %f\n", discountPrice);
    printf("Final Price: %f\n", finalPrice);
}

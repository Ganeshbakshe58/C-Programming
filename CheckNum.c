// WAP to check whether Number is positive or negative or ZERO.
#include <stdio.h>
void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } 
    else if (number < 0) {
        printf("The number is negative.\n");
    } 
    else {
        printf("The number is zero.\n");
    }
}

// Accept three numbers from user and find out largest number among three and also find out whether that three numbers are equal or not.(else if ladder)
#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d is the largest number.\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("%d is the largest number.\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("%d is the largest number.\n", num3);
    } 
    else {
        printf("Numbers are not different.\n");
    }

    if (num1 == num2 && num1 == num3) {
        printf("All three numbers are equal.\n");
    } else {
        printf("Numbers are not all equal.\n");
    }
}
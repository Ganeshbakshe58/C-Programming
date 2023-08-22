// WAP to find the factorial of a number
#include <stdio.h>
void main() {
    int num, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("fact is not defined for negative numbers.\n");
    } 
    else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("fact of %d is: %d\n", num, fact);
    }
}

//  WAP to check whether a number is prime or not
#include <stdio.h>
void main() {
    int num, Primenum = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        Primenum = 0; // 0 and 1 are not prime
    } 
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                Primenum = 0; // If divisible by any number, not prime
                break;
            }
        }
    }

    if (Primenum) {
        printf("%d is a prime number.\n", num);
    } 
    else {
        printf("%d is not a prime number.\n", num);
    }
}

// WAP to accept a number from user and find out sum of even digits from that given number.
#include <stdio.h>
void main(){
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    printf("Sum of even digits: %d\n", sum);
}

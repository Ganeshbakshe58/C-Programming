// WAP to check whether a number is palindrome.
#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return (reversedNum == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

/*WAP using following menus-
 Choice-1: Accept number and find out square and cube.
 Choice-2: Check whether the given year is LEAP or not. 
 If user enters wrong choice appropriate message should get displayed.*/
#include <stdio.h>
void main() {
    int choice;

    printf("Menu:\n");
    printf("1. Find square and cube of a number\n");
    printf("2. Check if a year is leap or not\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        int square = num * num;
        int cube = num * num * num;
        printf("Square: %d\n", square);
        printf("Cube: %d\n", cube);
    } 
    else if (choice == 2) {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("%d is a leap year.\n", year);
        } 
        else {
            printf("%d is not a leap year.\n", year);
        }
    } 
    else {
        printf("Invalid choice.\n");
    }
}
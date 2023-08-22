// Write a program that declares a double, an int, and char variables. Next declare and initialize a pointer to each of the three variables. Your program should then print the address of, and value stored in.
#include <stdio.h>
void main() {
    double a = 3.14159;
    int b = 42;
    char c = 'A';

    double *a_pnt = &a;
    int *b_pnt = &b;
    char *n_pnt = &c;

    printf("Address of double variable: %d, Value: %lf\n", a_pnt, *a_pnt);
    printf("Address of int variable: %d, Value: %d\n", b_pnt, *b_pnt);
    printf("Address of char variable: %d, Value: %c\n", n_pnt, *n_pnt);
}

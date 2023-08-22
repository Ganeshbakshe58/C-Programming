// Demonstrate addition of two floating type numbers by using call by address.

#include <stdio.h>
void add(float *num1, float *num2, float *result) {
    *result = *num1 + *num2;
}

int main() {
    float num1, num2, result;

    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);

    add(&num1, &num2, &result);
    printf("Sum of %f and %f is %f\n", num1, num2, result);
}
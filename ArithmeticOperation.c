// WAP to demonstrate arithmetic operation on two integer numbers.
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the first number: "); 
    scanf("%d", &a);
    printf("Enter second number: ");   
    scanf("%d", &b);    
    /* Arithmetic Operation */
    int c = a + b;
    printf("The Sum of 2 Number a & b is %d \n", c);
    int d = a - b;
    printf("The Difference between Two Numbers a and b is %d \n",d);
    int e = a * b;
    printf("The Product of Two Numbers a and b is %d \n",e);
    float f = a / b;
    printf("The Division of two Number a and b is %f \n", f);
    int g = a % b;
    printf("The Modulo of two Number a and b is %d \n", g);
}
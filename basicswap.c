// Accept two numbers and perform swapping with third variable.
#include<stdio.h>
void main()
{
int a, b, temp; 
printf("Enter two integers ");
scanf("%d %d", &a, &b);
printf("Before Swapping \nFirst variable = %d \nSecond variable = %d\n", a, b);
temp = a;
a = b;
b = temp;
printf("After Swapping \nFirst variable = %d \nSecond variable = %d \n", a, b);
}
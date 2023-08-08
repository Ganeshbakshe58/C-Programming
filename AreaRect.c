// WAP to calculate area of rectangle
#include<stdio.h>
void main(){
    float l,b;
    printf("Enter length and breadth: \n");
    scanf("%f%f",&l,&b);
    float a=2*l*b; //Area formula
    printf("Area=%0.2f",a);
}
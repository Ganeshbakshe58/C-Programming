// WAP to check whether a number is even or odd
#include<stdio.h>
void main(){
    int Num ;
    printf("Enter a number : ");
    scanf("%d",&Num);
    if (Num%2 == 0)
    {
        printf("The Number %d is a Even Number ", Num);
    }
    else
    {
        printf("The Number %d is Odd Number", Num);
    }
    
    
}
// Write a program which will accept three integer numbers from user and find out greatest among them using conditional operator.
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d \n", &a, &b, &c);
    // Conditional operator
    int greatnum = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("The greatest number is : %d", greatnum) ;
}
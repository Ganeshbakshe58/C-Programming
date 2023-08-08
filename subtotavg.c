// WAP to accept five subject marks and find out total and average of the marks.
#include <stdio.h>
void main(){
    int sub1, sub2, sub3, sub4, sub5;
    scanf("%d %d %d %d %d ",&sub1, &sub2, &sub3, &sub4, &sub5);
    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float avg=sum/5;
    printf("Sum is: %d \nAverage is : %f" , sum, avg);
}
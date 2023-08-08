// WAP which calculate speed for time and distance.
#include<stdio.h>
void main(){
    float t,d;
    printf("Enter the Time (s): ");
    scanf("%f",&t);
    printf("Enter the Distance (m): ");
    scanf("%f",&d);
    float Speed = d/t;
    printf("Speed (m/s) = %f", Speed);
}
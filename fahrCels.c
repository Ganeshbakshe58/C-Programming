// WAP to convert Fahrenheit temp in degree Celsius.
#include<stdio.h>
void main(){
    // C = 5/9(F – 32).
    float fahr, cels;
    printf("Enter a temperature in degrees Fahrenheit: \n");
    scanf("%f", &fahr);
    cels = (0.55)*(fahr-32);
    printf("The equivalent temperature is %f C \n",cels);
}
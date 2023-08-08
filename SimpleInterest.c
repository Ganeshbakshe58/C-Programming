// WAP to calculate Simple interest.
#include<stdio.h>
void main()
{
	// float P = 1, R = 1, T = 1;
    float P,R,T;
    printf("Enter Principal Amount : "); 
    scanf("%f",&P);
    printf("Enter Rate of interest in percentage: ");
    scanf("%f",&R);
    printf("Enter Time period(in years):");
    scanf("%f",&T);
	float SI = (P * T * R) / 100;
	printf("Simple Interest = %f \n", SI);
}
// WAP to check whether a person is eligible for voting or not
#include<stdio.h>
void main(){
    int Age ;
    printf("Enter a Age : ");
    scanf("%d",&Age);
    if (Age >= 18)
    {
        printf("Eligible For Voting");
    }
    else
    {
        printf("Not Eligible For Voting");
    }
}
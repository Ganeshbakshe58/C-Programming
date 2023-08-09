// WAP a program to accept percent from user and check the GRADE
 /*A. Above 70% - Grade A 
 B. Between 60% to 70% - Grade B+. 
 C. Between 45% to 60% - Grade B. 
 D. Between 35% to 45% - Grade C.
 E. Less than 35% - Fail */
 
#include <stdio.h>

void main() {
    float percent;

    printf("Enter the percent: ");
    scanf("%f", &percent);

    if (percent > 70) {
        printf("Grade A\n");
    } else if (percent >= 60 && percent <= 70) {
        printf("Grade B+\n");
    } else if (percent >= 45 && percent < 60) {
        printf("Grade B\n");
    } else if (percent >= 35 && percent < 45) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }
}
// WAP to demonstrate typedef keyword.
#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[20];
    int age;
}emp;

int main(){
    emp E1;
    printf("Enter the details of Employee E1------\n");
    printf("Enter the name of the employee: ");
    scanf("%s",&E1.name);
    printf("Enter the age of the employee: ");
    scanf("%d",&E1.age);
    printf("\n Name of the Employee is %s",E1.name);
    printf("\n Age of the Employee is %d",E1.age);
}
// WAP to compare two strings using strcmp ().
#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    printf("Enter two string : \n");
    gets(a);
    gets(b);
    printf("string 1: %s \t string 2: %s \n",a,b);
    printf("Compare the two strings : %d", strcmp(a,b));
}
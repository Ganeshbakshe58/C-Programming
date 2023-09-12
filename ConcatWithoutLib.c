// WAP to concatenate two strings without using library function.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] , str2[50] ;
    int i=0 , j=0;
    printf("Enter the string 1: ");
    gets (str1);
    printf("Enter the string 2: ");
    gets (str2);
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("Concatenated string is '%s'",str1);
}
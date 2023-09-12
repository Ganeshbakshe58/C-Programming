// Demonstrate all string function using library function.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    printf("string1 : %s \t string2 : %s",str1,str2);
    int len=strlen(str1);
    printf("\nLength of string : %d",len);
    strrev(str1);
    printf("\nReverse string : %s",str1);
    strupr(str2);
    printf("\nstring in Uppercase : %s",str2);
    strlwr(str2);
    printf("\nstring in Lowercase : %s",str2);
    printf("\nConcatenate two strings : %s",strcat(str2,str1));
    int cmp=strcmp(str1,str2);
    printf("\nCompare the two strings : %d",cmp);
    printf("\nCopy string 2 to string 1 : %s",strcpy(str1,str2));
}
// WAP to convert uppercase string into lowercase and vice versa .Write your own functions for the same.
#include<stdio.h>
#include<string.h>
void lowercase(char str1[]);
void uppercase(char str2[]);
void lowercase( char str1[]){
    int i;
    for(i=0;str1[i];i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i] = str1[i] + 32;
        }
    }
    printf("In lowercase : %s\n",str1);
}
void uppercase( char str2[]){
    int j;
    for(j=0;str2[j];j++){
        if(str2[j]>='a' && str2[j]<='z'){
            str2[j] = str2[j] - 32;
        }
    }
    printf("In Uppercase : %s",str2);
}
void main(){
    char str1[50], str2[50];
    printf("Enter the string in Uppercase : ");
    gets(str1);
    lowercase(str1);
    printf("Enter the string in lowercase : ");
    gets(str2);
    uppercase(str2);
}
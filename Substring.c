// Find a substring in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50], str2[50];
    int l, i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    //finding length of second string
    for (l = 0; str2[l] != '\0'; l++);
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++){
        if (str1[i] == str2[j]){
            j++;
        }
        else{
            j = 0;
        }
    }
    if (j == l){
        printf("Substring found at position %d", i - j + 1);
    }
    else{
        printf("Substring not found");
    }
    return 0;
}
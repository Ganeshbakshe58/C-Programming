/*WAP to print the following pattern :
 b) A 
 A B 
 A B C 
 */
#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of Rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }        
        printf("\n");
    }
}

/* WAP to print the following pattern :
     * 
    ***
   *****
  *******
 *********
 */ 
#include <stdio.h>
void main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }   
        printf("\n");
    }
}
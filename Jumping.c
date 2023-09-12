/*WAP to print the following on output screen using jumping statements 
 
 1 5
 2 4
 4 2
 5 1 */
#include <stdio.h>
int main() {
    int i = 1, j = 5;

    loop1:
    if (i <= 5) {
        printf("%d %d\n", i, j);
        i++;
        j--;
        if (i <= 5) {
            goto loop2;
        }
    }

    loop2:
    if (i <= 5) {
        printf("%d %d\n", i, j);
        i++;
        j--;
        if (i <= 5) {
            goto loop1;
        }
    }
    return 0;
}

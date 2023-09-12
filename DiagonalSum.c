// Write a C program to compute sum of diagonal elements of a 2D array of size 3*3
#include <stdio.h>

int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{1,2,3}};
    int i, j, sum = 0;

    // Compute the sum of diagonal elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    // Display the sum
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}

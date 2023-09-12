/*Perform following operations on two matrices with order m*n and p*q.
1. Addition of two matrix 
2. Multiplication of two matrix */
#include <stdio.h>
int main() {
    int m, n, p, q;

    // Input dimensions of the matrices
    printf("Enter the dimensions of the first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the dimensions of the second matrix (p x q): ");
    scanf("%d %d", &p, &q);

    if (m != p || n != q) {
        printf("Matrix addition is not possible due to incompatible dimensions.\n");
        return 1; // Exit with an error code
    }

    int matrix1[m][n], matrix2[p][q], resultadd[m][n], resultMul[m][n];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            resultadd[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the Addition result
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultadd[i][j]);
        }
        printf("\n");
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultMul[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultMul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Display the Multiplication result
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", resultMul[i][j]);
        }
        printf("\n");
    }


    return 0;
}
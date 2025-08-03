#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    // Matrix size input lobo
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication condition check
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    // First matrix input
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Second matrix input
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Multiplication logic
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mult[i][j] = 0;
            for (k = 0; k < c1; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Result print
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }

    return 0;
}
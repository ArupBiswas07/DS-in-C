#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], i, j, rows, cols;

    // Row aru column lobo
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // First matrix input lobo
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    // Second matrix input lobo
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    // Matrix addition koribo
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Result print koribo
    printf("Sum of matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
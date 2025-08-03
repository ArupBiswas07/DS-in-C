#include <stdio.h>

int main() {
    int a[10][10], trans[10][10], rows, cols, i, j;

    // Matrix size lobo
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    // Matrix input
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    // Transpose koribo
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            trans[j][i] = a[i][j];

    // Result print
    printf("Transpose of matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
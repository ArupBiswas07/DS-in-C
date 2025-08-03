#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array input
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Position lobo
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    // Element delete koribo
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // Size komabo

    // Result print
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
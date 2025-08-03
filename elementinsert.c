#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    // Size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array input lobo
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Element aru position lobo
    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Element insert koribo
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++; // Size increase koribo

    // Result print
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
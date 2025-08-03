#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    // Size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array input
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Search koribo lage je value
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search koribo
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Result print koribo
    if (found)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");

    return 0;
}
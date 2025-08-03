#include <stdio.h>

int main() {
    int n, i, max;

    // Size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Array elements input lobo
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Largest element find koribo
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Result print
    printf("Largest element = %d\n", max);

    return 0;
}
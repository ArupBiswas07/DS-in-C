#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i, sum = 0;

    // Size lobo
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc use kori memory allocate koribo
    ptr = (int*) malloc(n * sizeof(int));

    // Memory available ase naki check koribo
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    // Elements input lobo
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i]; // Sum calculate koribo
    }

    // Result print
    printf("Sum = %d\n", sum);

    // Memory free koribo
    free(ptr);

    return 0;
}
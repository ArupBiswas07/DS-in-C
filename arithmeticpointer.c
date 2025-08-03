#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Array start address dhoribo

    // Pointer arithmetic kori values access koribo
    printf("Using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value at position %d = %d\n", i, *(ptr + i));
    }

    return 0;
}
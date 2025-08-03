#include <stdio.h>

// Function with pointer parameters
void swap(int *a, int *b) {
    int temp = *a;  // a'r value temp't loi thakibo
    *a = *b;        // b'r value a't rakhim
    *b = temp;      // temp't thaka value b't rakhim
}

int main() {
    int x, y;

    // Dueta number lobo
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Swap function call
    swap(&x, &y);

    // Result print
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
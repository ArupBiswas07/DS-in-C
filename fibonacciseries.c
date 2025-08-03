#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    // Term number lobo
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Fibonacci print koribo
    printf("Fibonacci Series: %d %d ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
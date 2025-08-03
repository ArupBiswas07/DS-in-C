#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial calculate koribo
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Result print
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
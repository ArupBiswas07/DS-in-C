#include <stdio.h>

// Recursive function banabo
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Result print
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
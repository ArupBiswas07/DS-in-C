#include <stdio.h>

// Recursive function banabo
int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;

    // Nth term lobo
    printf("Enter the term number: ");
    scanf("%d", &n);

    // Result print
    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));

    return 0;
}
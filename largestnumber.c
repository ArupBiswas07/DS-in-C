#include <stdio.h>

int main() {
    int a, b;

    // Input lobo
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Compare koribo
    if (a > b)
        printf("%d is largest\n", a);
    else
        printf("%d is largest\n", b);

    return 0;
}
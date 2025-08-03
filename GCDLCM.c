#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    // Dueta number lobo
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    // GCD find koribo (Euclid's method)
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (x * y) / gcd; // LCM formula

    // Result print koribo
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
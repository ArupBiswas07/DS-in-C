#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Digit gusi sum koribo
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Result print
    printf("Sum of digits = %d\n", sum);

    return 0;
}
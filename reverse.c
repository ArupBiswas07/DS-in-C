#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse koribo
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Result print
    printf("Reversed number = %d\n", reverse);

    return 0;
}
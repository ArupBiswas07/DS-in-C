#include <stdio.h>

int main() {
    int num, count = 0;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Digits count koribo
    while (num != 0) {
        num = num / 10;
        count++;
    }

    // Result print
    printf("Number of digits = %d\n", count);

    return 0;
}
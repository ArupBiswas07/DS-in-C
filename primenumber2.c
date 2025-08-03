#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    // 1 pora 100 olop prime check koribo
    for (i = 2; i <= 100; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
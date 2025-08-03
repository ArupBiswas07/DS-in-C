#include <stdio.h>

int main() {
    int num, i;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Table print koribo
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
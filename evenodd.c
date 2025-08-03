#include <stdio.h>

int main() {
    int num;

    // Number lobo
    printf("Enter a number: ");
    scanf("%d", &num);

    // Even or odd check koribo
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // String lobo
    printf("Enter a string: ");
    scanf("%s", str);

    // Length count koribo
    while (str[i] != '\0') {
        i++;
    }

    // Result print
    printf("Length of string = %d\n", i);

    return 0;
}
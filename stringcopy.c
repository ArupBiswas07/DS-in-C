#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    // String lobo
    printf("Enter a string: ");
    scanf("%s", str1);

    // Copy koribo manually
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Null character diya lage

    // Result print
    printf("Copied string: %s\n", str2);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // String input lobo
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str); // Length find koribo

    // Palindrome check koribo
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Result print
    if (isPalindrome)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    // Operator lobo
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // whitespace age rakha lage

    // Dueta number lobo
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    // Switch-case use koribo
    switch(op) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Cannot divide by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
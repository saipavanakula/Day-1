#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Read inputs from the user
    printf("Enter Number 1: ");
    scanf("%f", &num1);

    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number 2: ");
    scanf("%f", &num2);

    // Perform calculations based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Return non-zero value to indicate an error occurred
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Return non-zero value to indicate an error occurred
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
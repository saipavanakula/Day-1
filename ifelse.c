#include <stdio.h>

// Function to find the biggest of two numbers using if-else
int findMaxIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function to find the biggest of two numbers using ternary operator
int findMaxTernary(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    return max;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int maxIfElse = findMaxIfElse(num1, num2);
    printf("The biggest number using if-else is: %d\n", maxIfElse);

    int maxTernary = findMaxTernary(num1, num2);
    printf("The biggest number using ternary operator is: %d\n", maxTernary);

    return 0
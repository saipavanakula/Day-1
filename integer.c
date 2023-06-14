#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1 << 0;  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= 1 << 15;  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int number, operationType;

    // Read inputs from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    // Perform the specified bit operation
    int result = bit_operations(number, operationType);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
In this program, we define the bit_operations function that accepts an integer num and an operation type oper_type as parameters.

Inside the function, we use a switch statement to perform the specified bit operation based on the oper_type. For operation type 1, we set the 1st bit of num by using the bitwise OR (|) operation with 1 shifted to the 0th bit position. For operation type 2, we clear the 31st bit of num by using the bitwise AND (&) operation with the complement of 1 shifted to the 31st bit position. For operation type 3, we toggle the 16th bit of num by using the bitwise XOR (^) operation with 1 shifted to the 15th bit position.

The modified num is returned from the function.

In the main function, we read the integer and the operation type from the user using scanf(). Then, we call the bit_operations function with the provided inputs and store the result in the result variable.

Finally, we print the result using printf() in the main function.

The program returns 0 to indicate successful execution.







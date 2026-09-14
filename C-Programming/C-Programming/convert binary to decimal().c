#include <stdio.h>

int main() {
    int binary;
    int decimal = 0, base = 1, rem,temp;

    // Accept binary input from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary; // Preserve original input

    // Conversion loop
    while (temp > 0) {
        rem = temp % 10;       // Extract the last digit (0 or 1)
        decimal += rem * base; // Add positional value to the decimal total
        base *= 2;             // Move to the next power of 2
        temp /= 10;            // Remove the last digit
    }

    // Display the result
    printf("%d in binary = %d in decimal\n", binary, decimal);

    return 0;
}
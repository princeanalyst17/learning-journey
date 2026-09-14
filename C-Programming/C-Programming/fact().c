#include <stdio.h>

int main() {
    int num, i , fact = 1;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Error checking for negative numbers
    if (num < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        // Compute factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of a number is:%d",fact);
    }

    return 0;
}
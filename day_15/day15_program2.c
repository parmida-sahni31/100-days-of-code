//Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;             // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                        // Remove last digit
    }

    // Display result
    printf("Reversed number = %d\n", reversed);

    return 0;
}

#include <stdio.h>
#include <math.h>  // for the pow() function

int main() {
    int num, original, remainder, n = 0;
    double sum = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Step 1: Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Step 2 & 3: Calculate sum of digits raised to the power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);  // raise digit to power n
        temp /= 10;
    }

    // Step 4: Check if sum equals original number
    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

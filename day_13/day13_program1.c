#include <stdio.h>

int main() {
    int a, b, sum, difference, product, mod;
    char operator;
    float div;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Operation (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            sum = a + b;
            printf("Sum = %d\n", sum);
            break;

        case '-':
            difference = a - b;
            printf("Difference = %d\n", difference);
            break;

        case '*':
            product = a * b;
            printf("Product = %d\n", product);
            break;

        case '%':
            if (b != 0) {
                mod = a % b;
                printf("Modulus = %d\n", mod);
            } else {
                printf("Modulus by zero not possible\n");
            }
            break;

        case '/':
            if (b != 0) {
                div = (float)a / b;
                printf("Division = %.2f\n", div);
            } else {
                printf("Division by zero not possible\n");
            }
            break;

        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
} 
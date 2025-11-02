//Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {  // 1 is not a prime number
        isPrime = 1;  // assume number is prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;  // not a prime
                break;
            }
        }

        if(isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}

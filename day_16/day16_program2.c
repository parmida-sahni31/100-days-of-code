//Write a program to check if a number is a palindrome. 

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original= num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;             
        reversed = reversed * 10 + remainder; 
        num /= 10;                       
    }
    

    //check if it is a palindrome
    if (original == reversed)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}
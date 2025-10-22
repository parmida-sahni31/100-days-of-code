//Write a program to swap the first and last digit of a number

#include <stdio.h>

int main ()
{
    int n, temp, first_num, last_num, digit = 0, power= 1, middle, swapped;

    printf("enter n: ");
    scanf("%d", &n);

    temp = n;
    //get last number
    last_num= n % 10; 


    while (temp>= 10)
    {
        temp= temp / 10;
        digit++;
        power= power * 10;

    }

    first_num= temp;

    middle= (n % power) / 10;

    //assembling the number
    swapped = (last_num * power) + (middle * 10) + first_num;

    printf("%d", swapped);
    return 0;
}
#include <stdio.h>

int main ()
{
    char alpha;
    printf("enter the character: ");
    scanf("%c", &alpha);

    if ((alpha >= 'A') && (alpha <= 'Z'))
    {
        printf("it is uppercase");
    }
    else if ((alpha >= 'a') && (alpha <= 'z'))
    {
        printf("it is lowercase");
    }
    else if ((alpha >= '0') && (alpha <= '9'))
    {
        printf("it is a digit");
    }
    else 
    {
        printf("it is a special character");
    }

    return 0;
}
#include <stdio.h>

int main ()
{
    char alpha;
    printf("enter the character: ");
    scanf("%c", &alpha);

    if ((alpha=='a')||(alpha=='e')||(alpha=='i')||(alpha=='o')||(alpha=='u'))
        printf("it is a vowel");
    else 
        printf("it is a consonant");

    return 0;
}
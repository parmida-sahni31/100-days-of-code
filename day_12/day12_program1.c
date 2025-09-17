#include <stdio.h>

int main ()
{
    int days, fine;
    printf("enter the number of days: ");
    scanf("%d", &days);

    if (days<=5)
    {
        fine= days * 2;
        printf("your fine is: %d", fine);
    } else if (days<= 10 && days> 5)
    {
        fine= 10 + (days - 5) * 4;
        printf("your fine is: %d", fine);
    } else if (days<= 30 && days> 10)
    {
        fine= 30 + (days - 10) * 6;
        printf("your fine is: %d", fine);

    } else
        printf("membership cancelled");

    return 0;
    

}
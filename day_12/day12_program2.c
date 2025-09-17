#include <stdio.h>

int main ()
{
    int units, bill;
    printf("enter the number of units: ");
    scanf("%d", &units);

    if (units<=100)
    {
        bill = units * 5;
        printf("your bill is: %d", bill);

    } else if (units<= 200 && units> 100)
    {
        bill = 500 + (units - 100) * 7;
        printf("your bill is: %d", bill);

    } else if (units<= 300 && units> 200)
    {
        bill= 1200 + (units - 200) * 10;
        printf("your bill is: %d", bill);

    } else
    {
        bill= 2200 + (units - 300) * 12;
        printf("your bill is: %d", bill);
    }

    return 0;
    

}
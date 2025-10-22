//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main ()

{
    int a ,b, lcm;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    if (a > b)
    {
        int i=1
        while(1)
        {int multiple= i * a;
            
            lcm= i;
            break;

        }
    }
    else
    {
     for (int i=1; i<=a; i++)
        {
            if (a * i == b * i)
            lcm = i;
            break;
        }
    }
    printf("LCM is %d", lcm);
    return 0;


}
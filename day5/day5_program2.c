#include <stdio.h>

int main ()
{
    int time, hours, minutes, remainder, seconds;
    printf("enter the time in seconds: ");
    scanf("%d", &time);

    hours= time / 3600;
    remainder= time % 3600;
    minutes= remainder / 60;
    seconds= remainder % 60;
    printf("%d : %d : %d", hours, minutes, seconds);
    return 0;
}
#include <stdio.h>

int main ()
{
    float radius,area,circumference;
    printf("input the radius: ");
    scanf("%f", &radius);
    area= 3.14 * radius * radius;
    circumference= 2 * 3.14 * radius;
    printf("the area is: %f \nthe circumference is: %f", area, circumference);
    return 0;
}
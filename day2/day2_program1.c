#include <stdio.h>

int main ()
{
    int length,breadth,area,perimeter;
    printf("input the length: ");
    scanf("%d", &length);
    printf("enter the breadth: ");
    scanf("%d", &breadth);
    area= length * breadth;
    perimeter= 2*(length + breadth);
    printf("the area is: %d \nthe perimeter is: %d", area, perimeter);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, D, root1, root2;
    printf("enter coeff of x^2: ");
    scanf("%f", &a);
    printf("enter coeff of x: ");
    scanf("%f", &b);
    printf("enter c: ");
    scanf("%f", &c);
    D= pow(b, 2) - 4 * a * c;

    if (D> 0)
    { 
        root1= (-b + sqrt(D)) / (2*a);
        root2= (-b - sqrt(D)) / (2*a);
        printf("roots are real and different: %1f, %1f", root1, root2); 
    }
    else if (D==0) 
    {
        root1 = root2 = -b / 2 * a;
        printf("roots are real and equal: %1f, %1f", root1, root2);
    }
    else
        printf("real roots do not exist.");

    return 0;
}
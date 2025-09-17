#include <stdio.h>

int main ()
{
    int cp, sp;
    float loss, profit;
    printf("cost price: ");
    scanf("%d", &cp);
    printf("selling price: ");
    scanf("%d", &sp);

    if (cp > sp)
    {
        loss = (cp - sp) * 100 / cp;
        printf("the loss percentage is: %f", loss);
    } else if (sp > cp)
    {
        profit = (sp - cp) * 100 / cp;
        printf("the loss percentage is: %f", profit);
    } else
        printf("no profit no loss.");

    return 0;
    

}
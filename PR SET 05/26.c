/*.................sum of 1 + 1/2 + 1/3 + .... + 1/n...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    double a = 0, num = 0, i = 0, sum = 0;
    printf("Give a number till you want to run the series:");
    scanf("%lf", &a);
    for (i = 1; i < a+1; i++)
    {
        if(i == 1)
        {
            printf("\n1 + ");
        }
        else if(i == a)
        {
            printf("1/%.0lf", i);
        }
        else
        {
            printf("1/%.0lf + ", i);
        }
        sum = sum + 1 / i;
    }
    printf("\nThe sum of the given series will be:%.2lf", sum);
}
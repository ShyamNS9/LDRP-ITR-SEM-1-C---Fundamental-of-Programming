/*.................sum till 0...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    double a = 1, i = 0, sum = 0;
    int num = 1;
    printf("Give a number till you give 0 to add them:\n");
    while (a != 0)
    {
        printf("Give munber%d: ", num);
        num++;
        scanf("%lf", &a);
        sum = sum + a;
    }
    printf("\nThe sum of the given series will be:%.2lf", sum);
}
/*.................Armstrong Number...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, rem = 0, sum = 0, oldn = 0;
    printf("Give a number to find whether it is armstrongno or not it:");
    scanf("%d", &a);
    oldn = a;

    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        sum = sum + (rem * rem * rem);
    }
    if (oldn == sum)
    {
        printf("Given number is armstrong number");
    }
    else
    {
        printf("Given number is not armstrong number");
    }
}
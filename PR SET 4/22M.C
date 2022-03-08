/*.................Armstrong Number...................*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a = 0, rem = 0, sum = 0, oldn = 0, n = 0, count = 0, temp = 0;
    printf("Give a number to find whether it is armstrongno or not it:");
    scanf("%d", &a);
    oldn = a;
    temp = a;

    for(temp = a; temp!=0; n++)
    {
        temp /= 10;
        count++;
    }

    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        sum = sum + pow(rem, count);
    }
    if (oldn == sum)
    {
        printf("Given number is armstrong number");
    }
    else
    {
        printf("Given number is not armstrong number");
    }
    return 0;
}

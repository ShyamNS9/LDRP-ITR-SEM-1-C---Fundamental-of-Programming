/*.................Prime or Not...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1, f = 1, b = 1, c = 2;
    printf("Give a number to check the number is prime or not:");
    scanf("%d", &a);
    b = a;

    while (c <= (b / 2) && f != 0)
    {
        f = a % c;
        c++;
    }
    if (f == 0)
    {
        printf("Given number %d is non prime", a);
    }
    else
    {
        printf("Given number %d is prime", a);
    }
}
/*.................Factorial...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned long a = 1, f = 1;
    printf("Give a number to find the factorial:");
    scanf("%lu", &a);
    // old=a;

    while (a != 0)
    {
        f = f * a;
        a--;
    }
    printf("The factorial of the number is %lu", f);
}
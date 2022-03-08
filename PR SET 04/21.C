/*.................Reverse Number...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, rem = 0;
    printf("Give a number to reverse it:");
    scanf("%d", &a);

    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        printf("%d", rem);
    }
}
/*.................CHECK ALPHABET...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, rem = 0, old = 0, rev = 0;
    printf("Give a number to reverse it:");
    scanf("%d", &a);
    old = a;

    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        rev = rev * 10 + rem;
    }
    printf("The reverse of %d is %d", old, rev);
}
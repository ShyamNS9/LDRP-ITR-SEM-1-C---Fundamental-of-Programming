/*.................declare and use pointer...................*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int p = 100, *ptr;
    ptr = &p;
    printf("\nValue Of P: %d and %d", p, *ptr);
    printf("\nAdress Of P: %u and %u", &p, ptr);
    return 0;
}
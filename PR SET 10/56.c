/*.................call by value & reference...................*/
#include <stdio.h>
#include <conio.h>

void swap_byreference(int *, int *);
void swap_byvalue(int, int);

int main()
{
    int a, b;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);
    printf("\nBefore swaping With Call By value: \n");
    printf("Value Of A = %d and B = %d\n", a, b);
    swap_byvalue(a, b);
    printf("After swaping With Call By value: \n");
    printf("Value Of A = %d and B = %d\n", a, b);
    printf("\n---------------------------------------------------\n");

    printf("\nBefore swaping With Call By reference: \n");
    printf("Value Of A = %d and B = %d\n", a, b);
    swap_byreference(&a, &b);
    printf("After swaping With Call By reference: \n");
    printf("Value Of A = %d and B = %d\n", a, b);
    return 0;
}
void swap_byreference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Swaping done within the fuction: \n");
    printf("Value Of A = %d and B: = %d\n", *a, *b);
}
void swap_byvalue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swaping done within the fuction: \n");
    printf("Value Of A = %d and B: = %d\n", a, b);
}
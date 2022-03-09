/*.................sum of 1 + 1/2 + 1/3 + .... + 1/n...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, Array[5], a;
    printf("Enter 5 numbers you want to insert in the array: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter your Number%d:", i+1);
        scanf("%d", &a);
        Array[i] = a;
    }                       
    for (i = 0; i < 5; i++)
    {
        printf("Array[%d]:%d \n", i, Array[i]);
    }
}
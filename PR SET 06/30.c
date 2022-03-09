/*.................5 array print...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int Array[5], i;

    printf("\nPlease Enter 5 elements of an Array: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("Elemenst in this Array are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", Array[i]);
    }
}
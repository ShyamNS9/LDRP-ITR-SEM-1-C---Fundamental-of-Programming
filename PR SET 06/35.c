/*.................sort given n number...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int Array[50], i, num, j, a;
    printf("\nPlease Enter Number of elements in an array  :  ");
    scanf("%d", &num);
    printf("\nPlease Enter %d elements of an Array: \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Array[i]);
    }

    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (Array[i] > Array[j])
            {
                a = Array[i];
                Array[i] = Array[j];
                Array[j] = a;
            }
        }
    }
    printf("\nThe numbers arranged in ascending order are given below: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", Array[i]);
    }
}
/*.................max min from given array ...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int Array[50], i, num, max = 0, min = 0;
    printf("\nPlease Enter Number of elements in an array  :  ");
    scanf("%d", &num);
    printf("\nPlease Enter %d elements of an Array: \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Array[i]);
    }

    max = Array[0];
    min = Array[0];
    for (i = 1; i < num; i++)
    {
        if(max <= Array[i])
        {
            max = Array[i];
        }
        if (min >= Array[i])
        {
            min = Array[i];
        }
    }
    printf("\nMax from given array is: %d", max);
    printf("\nMin from given array is: %d", min);
}
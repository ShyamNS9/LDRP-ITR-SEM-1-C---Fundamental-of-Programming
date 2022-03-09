/*.................number of positive, negative and zero ...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int Array[50], i, num, pve = 0, nev = 0, zeo = 0;
    printf("\nPlease Enter Number of elements in an array  :  ");
    scanf("%d", &num);
    printf("\nPlease Enter %d elements of an Array: \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Array[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (Array[i] < 0)
        {
            pve = pve + 1;
        }
        if (Array[i] > 0)
        {
            nev = nev + 1;
        }
        if (Array[i] == 0)
        {
            zeo = zeo + 1;
        }
    }
    printf("\nNo. of positive from given array is: %d", pve);
    printf("\nNo. of negative from given array is: %d", nev);
    printf("\nNo. of zeros from given array is: %d", zeo);
}
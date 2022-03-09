/*      55555
        4444
        333
        22
        1    */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

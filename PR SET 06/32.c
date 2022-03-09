/*.................5 array SUM & AVG ...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int Array[5], i = 0, sum = 0;
    double avg = 0;

    printf("\nPlease Enter 5 elements of an Array: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);
        sum = sum + Array[i];
    }
    avg = sum / 5.0;
    printf("\nThe SUM of five array  element is: %d", sum);
    printf("\nThe AVG of five array  element is: %.2lf", avg);
}
/*.................average of first n numbers (UDF)...................*/
#include <stdio.h>
#include <conio.h>
float average(int);

void main()
{
    int num;
    float ans;
    printf("\nEnter the number you want to find average upto: ");
    scanf ("%d", &num);
    ans=average(num);
    printf ("\nThe average of first %d numbers is %.2f",num, ans);
}

float average(int num)
{
    int sum = 0, oldn = num;
    float avg;
    while (num != 0)
    {
        sum = sum + num;
        num--;
    }
    avg = (float)sum / oldn;
    return avg;
}
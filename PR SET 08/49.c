/*.................add first n numbers (UDF)...................*/
#include <stdio.h>
#include <conio.h>
int natural_no(int num);

void main()
{
    int num, total; 
    printf("Enter a natural number: ");
    scanf("%d", &num);      
    total = natural_no(num); 
    printf("Sum of the %d natural number is: %d", num, total);
}

int natural_no(int num)
{
    int i, sum = 0;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}
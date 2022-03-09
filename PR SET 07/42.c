/*.................len without str function...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    char Str[1000];
    int i, count = 0;
    printf("Enter the String: ");
    scanf("%s", Str);
    for (i = 0; Str[i] != '\0'; i++)
    {
        count += 1;
    }
    printf("Length of Str is %d", count);
}
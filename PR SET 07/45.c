/*.................reverse a given string...................*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("After reversing string is =%s", str);
}
/*.................into upper case string...................*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    printf("Enter your text : ");
    gets(str);
    strupr(str);
    printf("Uppercase string : %s", str);
}
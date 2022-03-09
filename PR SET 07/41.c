/*.................len of str...................*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char Str[1000];
    int i, count;
    printf("Enter the String: ");
    scanf("%s", Str);
    count = strlen(Str);
    printf("Length of Str is %d", count);
}
/*.................connect 2 str..................*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    printf("Enter string1: ");
    gets(s1);
    printf("Enter string2: ");
    gets(s2);
    strcat(s1, s2);
    printf("combined two strings: '%s'\n", s1);
}
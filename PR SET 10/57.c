/*.................find string len using pointer...................*/
#include <stdio.h>
#include <conio.h>

int string_len(char *p);

int main()
{
    char s[20];
    int i, len;
    printf("Enter string: ");
    scanf("%s", s);
    len = string_len(s);
    printf("Length of string: %d ", len);
    return 0;
}
int string_len(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}
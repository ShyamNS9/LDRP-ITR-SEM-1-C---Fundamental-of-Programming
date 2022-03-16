/*.................find adress of string & character...................*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[30] = "Shyam Sagothia";
    char c = 'C';
    int i;
    char *ptr_str[30];
    char *ptr_c = &c;

    for (i = 0; i < strlen(str); i++)
        ptr_str[i] = &str[i];
    
    printf("\nString Entered is : %s\nAddress of string :", str);
    for (i = 0; i < strlen(str); i++)
        printf("\n%c's address : %p", str[i], ptr_str[i]);

    printf("\nValue of c = %c\nAddress of char = %p", c, ptr_c);
    return 0;
}
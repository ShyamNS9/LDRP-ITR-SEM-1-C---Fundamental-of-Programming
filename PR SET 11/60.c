/*.................write in a file...................*/
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("input", "w");
    printf("Write in the input file: \n");
    while ((c = getc(stdin)) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    fp = fopen("input", "r");
    while ((c = getc(fp)) != EOF)
        putc(c, stdout);
    return 0;
}
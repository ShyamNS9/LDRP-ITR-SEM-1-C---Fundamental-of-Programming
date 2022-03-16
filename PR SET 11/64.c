/*.................file ppend...................*/
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("input", "a");
    printf("Add content to input file: \n");
    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("New content after appending to input file: \n");
    fp = fopen("input", "r");
    while ((c = getc(fp)) != EOF)
        putc(c, stdout);
    fclose(fp);
    return 0;
}
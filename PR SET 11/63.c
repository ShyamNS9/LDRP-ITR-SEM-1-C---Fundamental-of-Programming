/*.................one file to another...................*/
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp1, *fp2;
    char c;
    fp1 = fopen("input", "r");
    fp2 = fopen("output", "w");
    while ((c = getc(fp1)) != EOF)
        putc(c, fp2);
    printf("File copied\n\n");
    fclose(fp2);

    fp2 = fopen("output", "r");
    printf("New content of output file is: \n");
    while ((c = getc(fp2)) != EOF)
        putc(c, stdout);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
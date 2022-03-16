/*.................write and read int in/from filr...................*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    int num;

    fptr = fopen("integers", "w");
    if (fptr != NULL)
    {
        printf("File created successfully!\n");
    }
    else
    {
        printf("Failed to create the file.\n");
        return -1;
    }

    printf("Enter some integer numbers [Enter -1 to exit]: ");
    while (1)
    {
        scanf("%d", &num);
        if (num != -1)
        {
            putw(num, fptr);
        }
        else
        {
            break;
        }
    }
    fclose(fptr);

    fptr = fopen("integers", "r");
    printf("\nNumbers:\n");
    while ((num = getw(fptr)) != EOF)
    {
        printf("%d\n", num);
    }
    printf("\nEnd of file.\n");
    fclose(fptr);
    return 0;
}
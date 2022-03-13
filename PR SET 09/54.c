/*.................struct and function...................*/
#include <stdio.h>
#include <conio.h>
struct student
{
    int roll_no, marks;
    char name[25];
} stud[100], temp;

void max_list_display(struct student *record, int n);

int main()
{
    int i, j, n;
    printf("Enter the no of students\n");
    scanf("%d", &n);
    printf("enter student info as roll_no , name , marks\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &stud[i].roll_no, stud[i].name, &stud[i].marks);
    }
    max_list_display(&stud, n);
    return 0;
}

void max_list_display(struct student *record, int num)
{
    int i, j;
    int n = num; 
    printf("value if n is %d", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (record[j].marks < record[j + 1].marks)
            {
                temp = record[j];
                record[j] = record[j + 1];
                record[j + 1] = temp;
            }
        }
    }
    printf("\nStudent info in terms of marks from highest to lowest\n");
    printf("\nROLL_NO\t\t\tNAME\t\t\tMARKS\n");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t\t%s\t\t\t%d\n", record[i].roll_no, record[i].name, record[i].marks);
    }
}
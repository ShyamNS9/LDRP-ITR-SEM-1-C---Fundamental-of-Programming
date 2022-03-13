/*.................structure within structure...................*/
#include <stdio.h>
#include <conio.h>
struct student
{
    int roll, marks;
    char name[10];
    struct max_marks
    {
        int maximum;
    }m[1];
    
}s[3];
int main()
{   
    int i, r;
    printf("\nEnter information of students:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("Enter student name:");
        scanf("%s", s[i].name);
        printf("Enter roll no:");
        scanf("%d", &s[i].roll);
        printf("Enter marks:");
        scanf("%d", &s[i].marks);
        if (s[i].marks > s->m->maximum)
        {
            s->m->maximum = s[i].marks;
            r = i;
        }
    }
    printf("\nDetails of student having maximum marks is:\nName: %s \nRoll no: %d\nMarks: %d", s[r].name, s[r].roll, s[r].marks);
    return 0;
}
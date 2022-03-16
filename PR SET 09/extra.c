#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[50];
    float salary;
};

struct employee inputdata(struct employee b);
void display(struct employee a);

int main()
{
    struct employee z, e;
    z = inputdata(e);
    display(z);
    return 0;
}

struct employee inputdata(struct employee b)
{
    printf("Enter the name: ");
    scanf("%s", &b.name);
    printf("Enter the salary: ");
    scanf("%f", &b.salary);
    return b;
}

void display(struct employee a)
{
    printf("\nInformation of employee");
    printf("\nName : %s", a.name);
    printf("\nsalary : %.2f", a.salary);
}
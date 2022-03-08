               /*.................SWAPPING 2 INT...................*/

#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b;
 printf("Give two nmubers to swap them: ");
 printf("\nNumber1 = ");
 scanf("%d",&a);
 printf("\nNumber2 = ");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nThe first number is %d",a);
 printf("\nThe second number is %d",b);
}
               /*.................SWAPPING 3 INT...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c;
 printf("Give two nmubers to swap them: ");
 printf("\nNumber1 = ");
 scanf("%d",&a);
 printf("\nNumber2 = ");
 scanf("%d",&b);
 c=a;
 a=b;
 printf("\nThe first number is %d",a);
 b=c;
 printf("\nThe second number is %d",b);
}
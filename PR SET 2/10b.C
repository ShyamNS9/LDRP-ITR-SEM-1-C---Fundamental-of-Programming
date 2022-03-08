               /*.................GREATER SMALLER 2...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b,c;
   printf("Give two nmubers to find max among them: ");
   printf("\nNumber1 = ");
   scanf("%d",&a);
   printf("\nNumber2 = ");
   scanf("%d",&b);
   c=a>b?a:b;
   printf("\n%d is the greater number",c);
   c=a<b?a:b;
   printf("\n%d is the smaller number",c);
}
          /*.................MAX OF 3...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c;
 printf("Please enter three numbers:");
 printf("\nNunber 1=");
 scanf("%d",&a);
 printf("\nNunber 2=");
 scanf("%d",&b);
 printf("\nNunber 3=");
 scanf("%d",&c);
 if (a>b && a>c)
   {
   printf("%d is the maximum number",a);
   }
 else if (b>c)
   {
   printf("%d is the maximum number",b);
   }
 else
   {
   printf("%d is the maximum number",c);
   }
}
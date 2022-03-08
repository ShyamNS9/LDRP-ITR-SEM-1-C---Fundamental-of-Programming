               /*.................EVEN ODD...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a=0;
 printf("Program to determine odd or even number");
 printf("\nGive a number:");
 scanf("%d",&a);

 if (a%2==0)
   {
   printf("Given number is even number");
   }
 else
   {
   printf("Given number is odd number");
   }
}
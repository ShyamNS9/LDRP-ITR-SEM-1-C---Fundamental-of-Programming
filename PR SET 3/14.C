               /*.................CHECK LEAP YEAR...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int year;
 printf("Please enter a year:");
 scanf("%d",&year);

 if (year%400==0)
   {
   printf("Given year is leap year");
   }
 else if (year%100==0)
   {
   printf("Given year is not a leap year");
   }
 else if (year%4==0)
   {
   printf("Given year is a leap year");
   }
 else
   {
   printf("Given year is not a leap year");
   }
}
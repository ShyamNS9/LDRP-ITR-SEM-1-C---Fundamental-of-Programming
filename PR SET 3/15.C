               /*.................CHECK MONTH...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int month;
 printf("Tlease enter sr. no of a month:");
 scanf("%d",&month);
 switch(month)
 {
   case 1 :
   case 3 :
   case 5 :
   case 7 :
   case 8 :
   case 10:
   case 12:
	   printf("This month has 31 days");
	   break;
   case 2:
	   printf("This month has 28/29 days");
	   break;
   default:
	   printf("This month has 30 days");
	   break;
 }
}
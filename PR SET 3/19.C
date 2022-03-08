          /*.................USE GOTO...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a=1;
 repeat:
 printf("\n %d",a);

 if (a<10)
   {
   a++;
   goto repeat;
   }
}
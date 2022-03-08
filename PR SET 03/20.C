          /*.................SUM OF N NUMBRES...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a=1,limit=0,sum=0;
 printf("When do you want to stop the summation:");
 scanf("%d",&limit);

 repeat:
 if (a<=limit)
   {
   sum=sum+a;
   a++;
   goto repeat;
   }
   printf("Summation of first %d numbers is %d",limit,sum);
}
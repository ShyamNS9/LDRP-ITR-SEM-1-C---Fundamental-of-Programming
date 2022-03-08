           /*..................AVERAGE..................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d,e;
 float avg;
 printf("Give the five numbers to perform maths operation \n");
 printf("\n Give num1 = ");
 scanf("%d",&a);
 printf("\n Give num2 = ");
 scanf("%d",&b);
 printf("\n Give num3 = ");
 scanf("%d",&c);
 printf("\n Give num4 = ");
 scanf("%d",&d);
 printf("\n Give num5 = ");
 scanf("%d",&e);
 avg=(a+b+c+d+e)/5.0;
 printf("the average of five numbers will be = %f",avg);
}
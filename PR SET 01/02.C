           /*..................AVERAGE..................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d,e;
 float avg;
 printf("Give the five numbers to perform maths operation \n");
 printf("\nGive num1 = ");
 scanf("%d",&a);
 printf("\nGive num2 = ");
 scanf("%d",&b);
 printf("\nGive num3 = ");
 scanf("%d",&c);
 printf("\nGive num4 = ");
 scanf("%d",&d);
 printf("\nGive num5 = ");
 scanf("%d",&e);
 avg=(a+b+c+d+e)/5.0;
 printf("The average of five numbers will be = %f",avg);
}
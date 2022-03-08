             /*..................AREA CIRCLE......................*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
 int r;
 float area;
 printf("Give the value of radius to find area of circle \n");
 printf("\n Give radius = ");
 scanf("%d",&r);
 area=PI*r*r;
 printf("\n the area of the circle will be = %f",area);
}
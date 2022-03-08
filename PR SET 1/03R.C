               /*.................AREA RECTANGLE...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int l,b;
 float area;
 printf("Give the value of length and breath to find area of rectangle \n");
 printf("\nGive length = ");
 scanf("%d",&l);
 printf("\nGive breath = ");
 scanf("%d",&b);
 area=l*b;
 printf("\nThe area of the rectangle will be = %f",area);
}
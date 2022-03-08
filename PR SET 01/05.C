               /*.................ARITHMETIC...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int e;
 float a,b,d;
 printf("Give the two number to perform arithmetic operation \n");
 printf("\nNumber1 = ");
 scanf("%f",&a);
 printf("\nNumber2 = ");
 scanf("%f",&b);
 d=a+b;
 printf("\nAddition will be = %f",d);
 d=a-b;
 printf("\nSubtraction will be = %f",d);
 d=a*b;
 printf("\nMultiplication will be = %f",d);
 d=a/b;
 printf("\nDivision will be = %f",d);
}
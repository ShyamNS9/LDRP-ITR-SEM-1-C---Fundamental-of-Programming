               /*.................ARITHMETIC...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int e;
 float a,b,d;
 printf("Give the two number to perform arithmetic operation \n");
 printf("\n number1 = ");
 scanf("%f",&a);
 printf("\n number2 = ");
 scanf("%f",&b);
 d=a+b;
 printf("\n addition will be = %f",d);
 d=a-b;
 printf("\n subtraction will be = %f",d);
 d=a*b;
 printf("\n multiplication will be = %f",d);
 d=a/b;
 printf("\n division will be = %f",d);
}
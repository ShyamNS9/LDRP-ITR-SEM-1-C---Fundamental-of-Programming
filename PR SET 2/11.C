               /*.................BITWISE OPERATOR...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 unsigned int a=72,b=56;
 int c=0;
 printf("Program to deter mine bitwise operator");
 c=a&b;
 printf("\nbit AND operator is %d",c);
 c=a|b;
 printf("\nbit OR operator is %d",c);
 c=a^b;
 printf("\nbit XOR operator is %d",c);
 c=~a;
 printf("\nbit COMPLEMENT operator is %d",c);
 c=a<<2;
 printf("\nbit SHIFT LEFT operator is %d",c);
 c=a>>2;
 printf("\nbit SHIFT RIGHT operator is %d",c);
}
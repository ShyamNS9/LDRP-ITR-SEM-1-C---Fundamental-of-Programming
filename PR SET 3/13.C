               /*.................CHECK CHARACTER...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 char a;
 printf("Program to check type of character");
 printf("\nGive a character:");
 scanf("%c",&a);

// if ((a<='Z' && a>='A') || (a<='z' && a>='a'))
 if ((a<=90 && a>=65) || (a<=122 && a>=97)) //  a-z 97-122 & A-Z 65-90
   {
   printf("Given character is an alphabet");
   }
 else if (a<=57 && a>=48) // 0-9 48-57
   {
   printf("Given character is digit");
   }
 else
   {
   printf("Given character is a special symbol");
   }
}
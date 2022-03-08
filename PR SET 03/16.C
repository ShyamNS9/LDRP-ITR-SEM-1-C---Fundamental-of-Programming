               /*.................CHECK ALPHABET...................*/
#include<stdio.h>
#include<conio.h>

int main()
{
 char ch;
 printf("Please enter a alphabet:");
 scanf("%c",&ch);
 switch(ch)
 {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
	   printf("It is a vowel");
	   break;
   default:
	   printf("It is a consonent");
	   break;
 }
}
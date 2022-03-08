               /*.................YEAR--->MIN...................*/
#include<stdio.h>


int main()
{
 long int min,year;
 printf("Give the number of year to convert into minute \n");
 printf("\n number of year = ");
 scanf("%d",&year);
 min=year*365*24*60;
 printf("\n the number of minutes will be = %d",min);
}

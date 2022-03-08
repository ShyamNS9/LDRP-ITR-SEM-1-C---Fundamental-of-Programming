               /*.................YEAR--->MIN...................*/
#include<stdio.h>


int main()
{
 long int min,year;
 printf("Give the number of year to convert into minute \n");
 printf("\nNumber of year = ");
 scanf("%d",&year);
 min=year*365*24*60;
 printf("\nThe number of minutes will be = %d",min);
}

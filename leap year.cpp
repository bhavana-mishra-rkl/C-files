#include<stdio.h>
int main()
{
int year,a,b,c;
printf("enter the year");
scanf("%d", &year);
a= year%4 ;
b= year%100 ;
c= year%400 ;
if (a==0)
{
	if (b==0)
    {
         if (c==0)
         {
         	printf("The year %d is a leap year", year);
		 }
		 else
		 {
		 	printf("The year %d is not a leap year", year);
		 }
	}
	else 
		 {
		 	printf("The year %d is a leap year", year);
		 }
}
else
		 {
		 	printf("The year %d is not a leap year", year);
		 }
}

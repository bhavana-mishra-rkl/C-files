#include<stdio.h>
int main()
{
int age,citizenship,voter;
printf("enter your age\n");
scanf("%d",&age);
printf("enter 1 if you are indian , else 2\n");
scanf("%d",&citizenship);
printf("enter 1 if you have an official voter card else 2\n");
scanf("%d",&voter);
if (age>=18)
 {
 	if (citizenship==1)
 	{
 		if (voter==1)
 		{
 		   printf("The person is eligible to vote!");	
		 }
		else
		{
		   printf("The person is not eligible!");	
		}
	}
	else 
	{
		 printf("The person is not eligible!");
	}
 }
else
 {
 	 printf("The person is not eligible!");
 }
}

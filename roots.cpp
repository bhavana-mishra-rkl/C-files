#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,d,di,ai;
printf("enter the coefficients of x^2 , x and the constant term.\n");
scanf("%f%f%f",&a,&b,&c);
d=sqrt((b*b)-(4*a*c));
r2=(b+d)/(2*a);
if ((b*b)>(4*a*c))
{
    if (d>b)
    {
 	 r1=(d-b)/(2*a);
     printf("The roots of the quadratic equation are %f and -%f.",r1,r2);
    }
    else
    {
	 r1=(b-d)/(2*a);
	 printf("The roots of the quadratic equation are -%f and -%f.",r1,r2);
    }
}
else if ((b*b)<(4*a*c))
{
	di=sqrt(-(b*b)+(4*a*c));
	ai=2*a;
	printf("The roots of the quadratic equation are imaginary and are (-%f+-%fi)/%f",b,di,ai);
}
}

#include<stdio.h>
int main()
{
int a,b,c,d,l;
printf("enter 4 no.s");
scanf("%d%d%d%d", &a,&b,&c,&d);
if (a>b && a>c && a>d)
   l=a;
else if (a<b && b>c && b>d)
   l=b;
else if (c>a && c>b && c>d)
	l=c;
else if (d>a && d>b && d>c)
	l=d;
printf("largest among 4 numbers is %d",l);
}


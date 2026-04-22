#include<stdio.h>
int main()
{
	int a,b,c,l;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
		{
			if(b>c)
				l=b;
			else
				{
					if (a>c)
						l=c;
					else
						l=a;	
				}	
		}
	else
		{
			if(a>c)
				l=a;
			else
				{
					if (b>c)
						l=c;
					else
						l=b;
				}
		}
	printf("the second largest is %d",l);
}

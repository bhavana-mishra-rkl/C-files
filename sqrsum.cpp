#include<stdio.h>
int main()
{
	int x,y,i,s=0;
	printf("enter the start and the end point");
	scanf("%d%d", &x,&y);
	if (x<y)
	{
		for (x;x<=y;x++)
		{
			i=x*x;
			s+=i;
		}
	}
	else
	{
		for (y;y<=x;y++)
		{
			i=y*y;
			s+=i;
		}
	}
	printf("%d",s);
}

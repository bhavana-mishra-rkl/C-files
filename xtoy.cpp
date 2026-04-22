#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the start and the end point");
	scanf("%d%d", &x,&y);
	if (x<y)
	{
		for (x;x<=y;x++)
			printf("%d \n",x);
	}
	else
	{
		for (y;y<=x;y++)
			printf("%d \n",y);
	}
}

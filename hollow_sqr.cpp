#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1 || i==n)
		{
			for(j=1;j<=n;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else 
		{
			printf("* ");
			for(j=1;j<=n-2;j++)
			{
				printf("  ");
			}
			printf("*\n");
		}	
	}
}

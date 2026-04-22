#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		if(i==1 || i==n || i==2*n-1)
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

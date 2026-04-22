#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2 != 0)
		{
			for(j=1;j<=n;j++)
			{
				printf("* ? ");
			}
			printf("\n");
			printf("\n");
		}
		else
		{
			for(j=1;j<=n;j++)
			{
				printf("? * ");
			}
			printf("\n");
			printf("\n");
		}
    }
}

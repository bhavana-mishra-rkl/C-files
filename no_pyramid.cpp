#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+1;
	    } 
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int i,j,n,k,m;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(k=i-1;k>=1;k--)
			printf("%d",k);
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=n-i;j++)
			printf("%d",j);
		for(m=(n-1)-i;m>=1;m--)
			printf("%d",m);
		printf("\n");
	}
}

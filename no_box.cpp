#include<stdio.h>
int main()
{
	int i,n,k=2,m,a,j,l;
	printf("input n ");
	scanf("%d",&n);
	m=n-1;
	for(i=1;i<=n;i++)
		printf("%d ",i);
	printf("\n");
	for(j=2;j<=(n-1);j++)
	{	
	    printf("%d ",k++);
		for(a=1;a<=n-2;a++)
			printf("  ");
		printf("%d",m--);
		printf("\n");
	}
	for(l=n;l>0;l--)
		printf("%d ",l);
}

#include<stdio.h>
int main()
{
	int i,n,x;
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i<=2*n;i=i+2)
	{
		x=i*i;
		printf("%d\n",x);
	}
}

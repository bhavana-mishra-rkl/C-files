#include<stdio.h>
int main()
{
	int i,n,x;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<2*n+1;i=i+2)
	{
		x=i*i*i;
		printf("%d\n",x);
	}
}

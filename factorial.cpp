#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		f*=i;
	printf("%d",f);
}

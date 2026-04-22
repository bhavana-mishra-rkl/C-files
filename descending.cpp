#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=2*n;i>=2;i=i-2)
		printf("%d\n",i);
}

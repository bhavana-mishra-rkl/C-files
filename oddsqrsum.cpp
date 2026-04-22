#include<stdio.h>
int main()
{
	int i,n,x,s=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<2*n+1;i=i+2)
	{
		x=i*i;
		s+=x;
	}
	printf("%d",s);
}


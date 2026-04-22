#include<stdio.h>
int main()
{
	int n,a[n],i;
	printf("enter the total number of terms in the fibonnaci series");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	printf("%d %d",a[0],a[1]);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf(" %d",a[i]);
	}
}

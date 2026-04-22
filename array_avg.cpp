#include<stdio.h>
int main()
{
	int n,i,a[100],sum=0,avg;
	printf("enter the no. of elements");
	scanf("%d",&n);
	printf("input elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("sum is %d and average is %d",sum,avg);
}

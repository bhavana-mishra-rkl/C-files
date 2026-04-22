#include<stdio.h>
int main()
{
	int n,i,a[10],min;
	printf("enter the no. of elements");
	scanf("%d", &n);
	printf("input elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]<min)
			{
				min=a[i];
			}
	}
	printf("the smallest is %d", min);
}

#include<stdio.h>
int main()
{
	int n,i,a[10],max;
	printf("enter the no. of elements");
	scanf("%d", &n);
	printf("input elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]>max)
			{
				max=a[i];
			}
	}
	printf("the largest is %d", max);
}

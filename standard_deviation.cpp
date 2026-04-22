#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[100];
	float var,sd,mean;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		mean+=a[i]/n;
    }
    for(i=0;i<n;i++)
    	var+=(a[i]-mean)*(a[i]-mean) / n;
	sd=sqrt(var);
	printf("the standard deviation of the given data is %f",sd);
}

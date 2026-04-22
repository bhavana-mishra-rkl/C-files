#include<stdio.h>
int main()
{
	int n,i,k,s=0;
	printf("enter your number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			s+=i;
		}	
	}
	if (s == n+1)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
}

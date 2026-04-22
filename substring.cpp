#include<stdio.h>
#include<stdio.h>
int main()
{
	char x[100]=" ",y[100]=" ";
	int m,n,i,j=0,l;
	printf("input the word ");
	gets(x);
	printf("input the start index ");
	scanf("%d",&m);
	printf("input the end index ");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
			if(j<=n)
			{
				y[j]=x[i];
				j++;	
			}		
	printf("%s",y);
}

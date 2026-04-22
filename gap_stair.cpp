#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j,k;
	char x[100];
	printf("input word");
	gets(x);
	l=strlen(x);
	for(i=1;i<=l;i++)
	{
		for(k=1;k<=(l-i);k++)
			printf(" ");
		for(j=0;j<=i-1;j++)
			putchar(x[j]);
		printf("\n");
	}
}

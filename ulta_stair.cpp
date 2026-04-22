#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;
	char x[100];
	printf("input word");
	gets(x);
	l=strlen(x);
	for(i=l;i>0;i--)
	{
		for(j=0;j<i;j++)
			putchar(x[j]);
		printf("\n");
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;
	char x[100];
	printf("input word");
	gets(x);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		for(j=1;j<=(i+1);j++)
		{
			putchar(x[i]);
		}
		printf("\n");
	}

}

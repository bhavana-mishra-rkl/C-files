#include<stdio.h>
#include<string.h>
int main()
{
	char x[100]=" ";
	int i,l,j;
	printf("input your word: ");
	gets(x);
	l=strlen(x);
	for(i=0;i<(l-1);i++)
	{
		putchar(x[i]);	
		printf("\n");
	}
	for(j=l-1;j>=0;j--)
		printf("%c ",x[j]);
}

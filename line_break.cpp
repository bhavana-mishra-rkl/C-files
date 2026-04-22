#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i,l;
	printf("enter your sentence: ");
	gets(x);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		if(x[i] == 32)
			printf("\n");
		else
			putchar(x[i]);
	}
}

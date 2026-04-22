#include<stdio.h>
#include<string.h>
int main()
{
	char x[100]=" ",y[7]="",z[7]="";
	int i,l;
	printf("input your string: ");
	gets(x);
	printf("input the character to be replaced: ");
	gets(y);
	printf("input the replacement character: ");
	gets(z);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		if(x[i]==y[0])
			x[i]=z[0];
	}
	printf("%s",x);
}

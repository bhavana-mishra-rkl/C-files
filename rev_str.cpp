#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char x[100]=" " , y[100]=" ";
	printf("input the word ");
	gets(x);
	l=strlen(x);
	for(i=0;i<l;i++)
		y[l-i]=x[i];
	printf("reversed string is %s",y);
}

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
		y[l-i-1]=x[i];
	if(strcmp(x,y) == 0)
		printf("The string is palindrome");
	else
		printf("The string is not palindrome");
}

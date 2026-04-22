#include<stdio.h>
#include<string.h>
int main()
{
	char x[100]=" " ,y[7]=" ";
	int i,l,k=0;
	printf("input a word ");
	gets(x);
	printf("input the character you want to check on your string ");
	gets(y);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		if(x[i]==y[0])
			k++;
	}
	if(k==0)
		printf("your character '%s' doesn't exist in your word-%s",y,x);
	else
		printf("your character '%s' exists in your word '%s' and occurs %d time(s)",y,x,k);
}

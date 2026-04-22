#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i,l,k=1,j=0,c;
	printf("input your sentence: ");
	gets(x);
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		if(x[i] == 32)
			k++;
		else if(x[i] == 'a'|| x[i]=='e'|| x[i]=='i'|| x[i]=='o'|| x[i]=='u')
			j++;
	}
	c=l-(k-1)-j;
	printf("the no. of words in your sentence is %d\n",k);
	printf("the no. of vowels in your sentence is %d\n",j);
	printf("the no. of consonants in your sentence is %d",c);
}

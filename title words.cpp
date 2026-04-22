#include<stdio.h>
#include<string.h>
int main()
{
	char x[100]="",y[100]="";
	int i,l;
	printf("input your text: ");
	gets(x);
	l=strlen(x);
	y[0]=x[0]-32;
	for(i=0;i<l;i++)
	{
		if(x[i]==32)
		{
			y[i]=x[i];
			y[i+1]=x[i+1]-32;
			i++;	
		}
		else 
			y[i]=x[i];
	}
	printf("%s",y);
}

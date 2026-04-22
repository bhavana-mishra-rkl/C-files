#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100],z[100],t[100];
	int i,l,j,k=0,l1,l2,m,n=0;
	printf("enter your sentence: ");
	gets(x);
	printf("enter the word to be replaced: ");
	gets(y);
	printf("enter the replacement word: ");
	gets(z);
	l=strlen(x);
	l1=strlen(y);
	l2=strlen(z);
	for(i=0;i<=l;i++)
	{
		if(x[i] == 32 || x[i] =='\0')
		{
			for(j=k;j<i;j++)
				t[j-k]=x[j];
			t[j-k]='\0';
			if(strcmp(y,t) == 0)
			{
				if(l1>l2)
				{
					for(m=n;m<l2;m++)
						x[m]=z[m-n];
					x[m]=32;
					for(k=i+1;k<l;k++)
						x[k-(l1 - l2)]=x[k];
			    }
		    }
		}
	}
	printf("%s",x);
}

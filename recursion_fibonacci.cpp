#include<stdio.h>
void fibonnaci(int);
int a=0,b=1,c;
int main(){
	int items;
	printf("enter the no. of terms in the series: ");
	scanf("%d",&items);
	printf("%d %d ",a,b);
	items=items - 2;
	fibonnaci(items);
}
void fibonnaci(int n){
	if(n<=0) return;
	c=a+b;
	a=b;
	b=c;
	printf("%d ",c);
	fibonnaci(n-1);
}

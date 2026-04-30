#include<stdio.h>
int rev_order(int n){
	if (n<=0) return 0;
	printf("%d\n",n);
	rev_order(n-1);
}
int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	rev_order(n);
}

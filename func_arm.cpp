#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int n;
	printf("enter your number");
	scanf("%d",&n);
	armstrong(n);
}
int armstrong(int number)
{
	int digit,nod=0,sum=0,actual,temp;
	actual=number;
	temp=number;
	while(temp>0){
		temp=temp /10;
		nod++;
	}
	while(number>0){
		digit=number % 10;
		sum+=pow(digit , nod);
		number=number / 10;
	}

	if (sum == actual)
		printf("%d is an armstrong number", actual);
	else
		printf("%d is not an armstrong number", actual);	
}

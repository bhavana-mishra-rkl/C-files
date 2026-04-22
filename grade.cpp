#include<stdio.h>
int main()
{
	float m;
	printf("input marks");
	scanf("%d",&m);
	if (m>=90)
		printf("grade 0");
	else if (m>=80)
		printf("grade E");
	else if (m>=70)
		printf("grade A");
	else if (m>=60)
		printf("grade B");
	else if (m>=50)
		printf("grade C");
	else if (m>=40)
		printf("grade D");
	else
		printf("grade F");
}

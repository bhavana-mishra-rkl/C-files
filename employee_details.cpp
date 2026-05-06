#include<stdio.h>
struct employee{
	char name[30], education[50];
	float basic_salary;
};
int main()
{
	int i;
	struct employee s[i];
	float gross_salary;
	for(i=1;i<=10;i++)
	{
		printf("input name,education and basic salary of employee %d: ",i);
		scanf("%s%s%f",s[i].name,s[i].education,&s[i].basic_salary);
		gross_salary = 1.65 * s[i].basic_salary;
		printf("Gross salary of %s with %s education qualification is %f\n",s[i].name,s[i].education,gross_salary);
	}
}

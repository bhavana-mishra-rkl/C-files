#include<stdio.h>
struct student {
	char name[30];
	int roll_no, m1, m2, m3;
};
int gradepoint(int);
float cgpa(int,int,int);
int main()
{
	int i;
	struct student s[i];
	float u;
	for(i=1;i<=10;i++){
		printf("Input name, roll no. and marks of 3 subjects for student %d: ",i);
		scanf("%s%d%d%d%d",s[i].name,&s[i].roll_no,&s[i].m1,&s[i].m2,&s[i].m3);
		u=cgpa(s[i].m1, s[i].m2, s[i].m3);
		printf("cgpa is %f of student named %s with roll no. %d\n",u,s[i].name,s[i].roll_no);
	}	
}
int gradepoint(int y){
	if(y<=10)
		return 1;
	else if(y<=20)
		return 2;
	else if(y<=30)
		return 3;
	else if(y<=40)
		return 4;
	else if(y<=50)
		return 5;
	else if(y<=60)
		return 6;
	else if(y<=70)
		return 7;
	else if(y<=80)
		return 8;
	else if(y<=90)
		return 9;
	else if(y<=100)
		return 10;
}
float cgpa(int a, int b, int c){
	int x,n,z;
	x=gradepoint(a);
	n=gradepoint(b);
	z=gradepoint(c);
	return (x + 2*n + 3*z)/6.0;
}

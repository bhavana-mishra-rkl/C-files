#include<stdio.h>
struct complex
{
	int real,imag;
};
int main()
{
	struct complex a,b,c;
	printf("input 1st complex number: ");
	scanf("%d%d",&a.real, &a.imag);
	printf("input 2nd complex number: ");
	scanf("%d%d",&b.real, &b.imag);
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	printf("subtraction is %d+i(%d)",c.real , c.imag);	
}

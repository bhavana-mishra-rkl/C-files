#include<stdio.h>
struct complex
{
	float real,imag;
};
int main()
{
	struct complex a,b,c;
	printf("input 1st complex number: ");
	scanf("%f%f",&a.real, &a.imag);
	printf("input 2nd complex number: ");
	scanf("%f%f",&b.real, &b.imag);
	c.real = (a.real * b.real + a.imag * b.imag)/(b.real * b.real + b.imag * b.imag);
	c.imag = (a.imag * b.real - a.real * b.imag)/(b.real * b.real + b.imag * b.imag);
	printf("division is %f+i(%f)",c.real , c.imag);	
}

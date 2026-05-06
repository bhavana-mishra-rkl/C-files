#include<stdio.h>
struct circle
{
	float x,y,r;
};
int main()
{
	struct circle a,b;
	printf("enter x,y centre coordinates and radius of circle 1: ");
	scanf("%f%f%f",&a.x ,&a.y ,&a.r);
	printf("enter x,y centre coordinates and radius of circle 2: ");
	scanf("%f%f%f",&b.x ,&b.y ,&b.r);	
	if(a.r>b.r)
		printf("circle 1 is largest");
	else if(a.r==b.r)
		printf("both circles are equal");
	else
		printf("circle 2 is larger");
}


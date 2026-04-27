#include <stdio.h>
int matrix_elements(int, int, int x[10][10]);
int matrix_sum(int,int,int x[10][10], int y[10][10]);
int main()
{
	int r, c, A[10][10], B[10][10] ;
	printf("input number of rows and columns of the matrices to be added: ");
	scanf("%d%d", &r, &c);
	printf("input matrix A elements: ");
	matrix_elements(r, c, A);
	printf("input matrix B elements: ");
	matrix_elements(r, c, B);
	printf("The resultant matrix is:\n");
	matrix_sum(r,c,A,B);
}
int matrix_elements(int r, int c, int x[10][10]){
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
}
int matrix_sum(int r,int c,int  x[10][10],int y[10][10]){
	int s[10][10];
	for(int u=0;u<r;u++)
	{
		for(int v=0;v<c;v++)
		{
			s[u][v] = x[u][v] + y[u][v];
			printf("%d\t",s[u][v]);
		}
		printf("\n");
	}
}
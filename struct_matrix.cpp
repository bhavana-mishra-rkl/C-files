#include<stdio.h>
struct matrix{
	int r,c,arr[100][100];
};
int main(){
	int i, j, k, l, m, n, p, s=0, choice;
	struct matrix a,b,c;
	printf("enter the no. of rows and columns of first matrix: ");
	scanf("%d%d",&a.r,&a.c);
	printf("enter the elements of the first matrix: ");
	for(i=0;i<a.r;i++){
		for(j=0;j<a.c;j++){
			scanf("%d",&a.arr[i][j]);
		}
	}
	printf("enter the no. of rows and columns of second matrix: ");
	scanf("%d%d",&b.r,&b.c);
	printf("enter the elements of the second matrix: ");
	for(k=0;k<b.r;k++){
		for(l=0;l<b.c;l++){
			scanf("%d",&b.arr[k][l]);
		}
	}
	menu:
		printf("Choose the type of calculation u want to do with the 2 matrices:\n1.Add\n2.Subtract\n3.multiply\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(a.r != b.r || a.c != b.c){
					printf("The addition is done for matrices having same no. of rows and columns");
			    }
				else{
					for(m=0;m<a.r;m++){
						for(n=0;n<a.c;n++){
							c.arr[m][n] = a.arr[m][n] + b.arr[m][n];
							printf("%d\t",c.arr[m][n]);
						}
						printf("\n");
					}
				}
				break;
			case 2:
				if(a.r != b.r || a.c != b.c)
					printf("The subtraction is done for matrices having same no. of rows and columns");
				else{
					for(m=0;m<a.r;m++){
						for(n=0;n<a.c;n++){
							c.arr[m][n] = a.arr[m][n] - b.arr[m][n];
							printf("%d\t",c.arr[m][n]);
						}
						printf("\n");
					}
				}
				break;
			case 3:
				if(a.c != b.r)	
					printf("Multiplication is not possible for these 2 matrices");
				else{
					for(m=0;m<a.r;m++){
						for(n=0;n<b.c;n++){
							for(p=0;p<a.c;p++)
								s+= a.arr[m][p] * b.arr[p][n];
							c.arr[m][n] = s;
							printf("%d\t",c.arr[m][n]);
							s=0;
						}
						printf("\n");
					}
				}
				break;		
		}
	goto menu;
}

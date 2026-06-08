#include<stdio.h>
#include<string.h>
int main(){
	char temp[20], a[5][20]={"Dog","Apple","Orange","Cat","Ball"};
	int n=5;
	for(int k=0;k<n-1;k++){
		for(int i=0;i<n-1-k;i++){
			if(strcmp(a[i],a[i+1])>0){
				strcpy(temp,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],temp);			
			}	
		}
	}
	printf("sorted strings:\n");
	for(int j=0;j<n;j++)
		printf("%s\n",a[j]);
}

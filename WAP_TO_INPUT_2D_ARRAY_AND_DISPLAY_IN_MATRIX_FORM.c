#include <stdio.h>

int main(){
	int a[50][50],i,j,row,col;
	
	printf("Enter the size of the row: ");
	scanf("%d",&row);
	
	printf("Enter the size of the col: ");
	scanf("%d",&col);
	
	for(i=0;i<=row-1;i++){
		for(j=0;j<=col-1;j++){
			printf("\nEnter the value for the a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf(" \n The values of the array are:\n");
	for(i=0;i<=row-1;i++){
		for(j=0;j<=col-1;j++){
			printf("a[%d][%d] = %d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

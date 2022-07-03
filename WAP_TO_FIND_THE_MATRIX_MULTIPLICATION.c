//WAP_TO_FIND_THE_MATRIX_MULTIPLICATION.c

#include <stdio.h>

int main(){
	int i,j,r1,r2,c1,c2,a[50][50],b[50][50],c[50][50],k;
	
	printf("Enter the size for the r1 and c1 for the matrix A : ");
	scanf("%d%d",&r1,&c1);
	
		printf("Enter the size for the r2 and c2 for the matrix B : ");
	scanf("%d%d",&r2,&c2);
	
	if(c1!=r2){
		printf("The matrix multiplication is not possible.");
		return 0;
	}
	printf("\nEnter the value in matrix a: \n");
	for(i=0;i<=r1-1;i++){
		for(j=0;j<=c1-1;j++){
		printf("\nEnter the value of the matrix a[%d][%d]= ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	
	printf("\nEnter the value in matrix b: \n");	
	for(i=0;i<=r2-1;i++){
		for(j=0;j<=c2-1;j++){
		printf("\nEnter the value of the matrix b[%d][%d]= ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
	
	printf("\nThe Elements of the matrix a is : \n");	
	for(i=0;i<=r1-1;i++){
		for(j=0;j<=c1-1;j++){
		printf("a[%d][%d]=%d\t",i,j,a[i][j]);
	}
	printf("\n");
	}
	
	printf("\nThe Elements of the matrix b is : \n");	
	for(i=0;i<=r2-1;i++){
		for(j=0;j<=c2-1;j++){
		printf("b[%d][%d]=%d\t",i,j,b[i][j]);
	}
	printf("\n");
	}
	
	for(i=0;i<=r1-1;i++){
		for(j=0;j<=c2-1;j++){
			c[i][j]=0;
			for(k=0;k<=c1-1;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nThe Elements of the matrix c is : \n");	
	for(i=0;i<=r1-1;i++){
		for(j=0;j<=c2-1;j++){
		printf("c[%d][%d]=%d\t",i,j,c[i][j]);
	}
	printf("\n");
}
	return 0;
}

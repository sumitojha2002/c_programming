#include<stdio.h>

void input(int a[30][30],int row,int col);
void display(int b[30][30],int row,int col);
void mul(int a[30][30],int b[30][30],int row1,int row2,int col1,int col2);

int i,j;

int main(){
	int arrayA[30][30],arrayB[30][30],row1,col1,row2,col2;
	printf("Enter the size of first matrix the row and col: ");
	scanf("%d %d",&row1,&col1);
	printf("Enter the size of second matrix the row and col: ");
	scanf("%d %d",&row2,&col2);
	
	if(col1!=row2){
		printf("The matrix cannot be multiplied.");
	return 0;
	}
	
	input(arrayA,row1,col1);
	input(arrayB,row2,col2);
	display(arrayA,row1,col1);
	display(arrayB,row2,col2);
    mul(arrayA,arrayB,row1,row2,col1,col2);
  return 0;
}

void input(int a[30][30],int row,int col)
{
	printf("\nEnter the value in the matrix:\n");
	for(i=0;i<=row-1;i++)
	{
	for(j=0;j<=col-1;j++)
	{
		printf("\na[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}	
	}
}

void display(int b[30][30],int row,int col)
{
	printf("\nThe values in the matrix is: \n");
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
		printf("a[%d][%d]=%d\t",i,j,b[i][j]);	
		}
		printf("\n");
	}
}

void mul(int a[30][30],int b[30][30],int row1,int row2,int col1,int col2)
{int k,c[30][30];
	for(i=0;i<=row1-1;i++)
	{  
		for(j=0;j<=col2-1;j++){
			c[i][j]=0;
		for(k=0;k<=col1-1;k++){
			c[i][j]+=a[i][k]*b[k][j];
		}	
		}
		
	}
		printf("\nThe values in the matrix mul is: \n");
	for(i=0;i<=row1-1;i++)
	{
		for(j=0;j<=col2-1;j++)
		{
		printf("c[%d][%d]=%d\t",i,j,c[i][j]);	
		}
		printf("\n");
	}
}

#include<stdio.h>

void input(int a[30][30],int row,int col);
void display(int b[30][30],int row,int col);
int i,j;

int main(){
	int arrayA[30][30],row,col;
	printf("Enter the size of the row and col: ");
	scanf("%d %d",&row,&col);
	input(arrayA,row,col);
	display(arrayA,row,col);
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




//WAP_TO_DO_THE_MATRIX_MUL_BETWEEN_TWO_MATRIX_USING_POINTER.c

#include <stdio.h>
#define TOTAL_COLOUMN 10

int main()
{
	int a[10][10],b[10][10],c[10][10];
	int *ptr1,*ptr2,*ptr3;
	int r1,c1,r2,c2;
	int i,j,k;
	
	printf("\nEnter the the value of the row and col of the matrix a: \n");
	scanf("%d%d",&r1,&c1);
	
	printf("\nEnter the the value of the row and col of the matrix b: \n");
	scanf("%d%d",&r2,&c2);
	
	if(c1!=r2)
	{
		printf("\nThe matrix cannot be multiplied.");
		return 0;
	}
	
	ptr1 = &a[0][0];
	ptr2 = &b[0][0];
	ptr3 = &c[0][0];
	
	printf("\nEnter the value in the matrix A:\n ");
	for(i=0;i<=r1-1;i++)
	{
		for(j=0;j<=c1-1;j++)
		{
		scanf("%d",ptr1+(TOTAL_COLOUMN*i)+j);	
		}
	}
	
	printf("\nEnter the value in the matrix B:\n ");
	for(i=0;i<=r2-1;i++)
	{
		for(j=0;j<=c2-1;j++)
		{
		scanf("%d",ptr2+(TOTAL_COLOUMN*i)+j);	
		}
	}
	
	printf("\nThe values in the matrix a: \n");
	for(i=0;i<=r1-1;i++)
	{
		for(j=0;j<=c1-1;j++)
		{
			printf("%d\t",*(ptr1+(TOTAL_COLOUMN*i)+j));
		}
		printf("\n");
	}
	
	printf("\nThe values in the matrix b: \n");
	for(i=0;i<=r2-1;i++)
	{
		for(j=0;j<=c2-1;j++)
		{
			printf("%d\t",*(ptr2+(TOTAL_COLOUMN*i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<=r1-1;i++)
	{
		for(j=0;j<=c2-1;j++)
		{
		*(ptr3+(TOTAL_COLOUMN*i)+j)=0;
		for(k=0;k<=c1-1;k++)
		{
		*(ptr3+(TOTAL_COLOUMN*i)+j)+=*(ptr1+(TOTAL_COLOUMN*i)+k)* *(ptr2+(TOTAL_COLOUMN*k)+j);	
		}	
		}
	}
	
	printf("\nThe values in the matrix are in c: \n");
	for(i=0;i<=r2-1;i++)
	{
		for(j=0;j<=c2-1;j++)
		{
			printf("%d\t",*(ptr3+(TOTAL_COLOUMN*i)+j));
		}
		printf("\n");
	}
	
	return 0;
}

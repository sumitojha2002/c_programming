//WAP_TO_ADD_THE_DIAGONALS_OF_THE_MATRIX.c

#include <Stdio.h>
#define TOTAL_COL 10

void input(int *ptr,int r,int c);
void display(int *ptr,int r, int c);
void SUM(int *ptr1,int *ptr3,int r,int c);


int i,j,k;

int main(){
	int a[50][50],sum[50];
    int r1,c1;
	r1=3;
	c1=3;
	
	printf("\n Enter the elements in matrix a is: \n");
	input(&a[0][0],r1,c1);
		
	printf("\n The elements in matrix a is: \n");
	display(&a[0][0],r1,c1);

	SUM(&a[0][0],&sum,r1,c1);
	
	return 0;
}


void input(int *ptr,int r,int c)
{
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",ptr+(TOTAL_COL*i)+j);
		}
	}
}

void display(int *ptr,int r,int c)
{
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d\t",*(ptr+(TOTAL_COL*i)+j));
		}
		printf("\n");	
	}
}

void SUM(int *ptr1,int *ptr3,int r,int c)
{ 
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			if((i+j)==r-1 || i==j)
			{
			*ptr3 =*ptr3 + *(ptr1+(TOTAL_COL*i)+j);	
			}
		}
	}
	printf("\n the sum is: %d",*ptr3);
}

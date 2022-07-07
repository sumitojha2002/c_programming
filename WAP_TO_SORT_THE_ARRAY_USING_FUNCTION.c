#include <stdio.h>

void enter(int a[],int size);
void display(int a[],int size);
void sort(int a[],int size);
void display_sort_array(int a[],int size);

int i,j;

int main(){
	int array[50],size;
	
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	enter(array,size);
	display(array,size);
	sort(array,size);
	display_sort_array(array,size);
	
	return 0;
}


void enter(int a[],int size)
{
	printf("\nEnter the numbers in teh array:\n");
	for(i=0;i<=size-1;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}


void display(int a[],int size)
{
	printf("\nThe values in the array is: \n");
	for(i=0;i<=size-1;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}


void sort(int a[],int size)
{
int temp=0; 
   for(i=0;i<=size-2;i++){
   	for(j=0;j<=size-2-i;j++){
   		if(a[j]>a[j+1]){
   			temp=a[j];
   			a[j]=a[j+1];
   			a[j+1]=temp;
		   }
	   }
   }
}

void display_sort_array(int a[],int size)
{
	printf("\nThe values in the sort array is: \n");
	for(i=0;i<=size-1;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}








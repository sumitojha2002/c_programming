#include <stdio.h>
#include <string.h>

void name(char a[50][50],int size);
void display(char a[50][50],int size);
void sort(char a[50][50],int size);
int i,j;

int main(){
    char str[50][50],size;
	printf("Enter the size of the string: ");
	scanf("%d",&size);
	name(str,size);
	printf("The unsorted array:");
	display(str,size);
	sort(str,size);
	return 0;	
}

void name(char a[50][50],int size)
{
	for(i=0;i<=size-1;i++){
			printf("a[%d]=",i);
		scanf("%s",&a[i]);
	}
}


void display(char a[50][50],int size)
{	
	for(i=0;i<=size-1;i++){
		printf("\na[%d]=%s",i,a[i]);
	}
}

void sort(char a[50][50],int size)
{ char temp[50];
	 for(i=0;i<=size-2;i++)
	{
		for(j=0;j<=size-2-i;i++){
			if((strcmp(a[j],a[j+1]))>0){
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
		}
		}
	}
	printf("The shorted array is ");
    display(a,size);
}


#include <stdio.h>

int main(){
	int a[50],b[50],c[50],i,size;
	
	printf("enter the size of the array: ");
	scanf("%d",&size);
	
	for(i=0;i<=size-1;i++){
		printf("\nEnter the value at the a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe values in the array a: ");
		for(i=0;i<=size-1;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	
	for(i=0;i<=size-1;i++){
		printf("\nEnter the value at the b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nThe values in the array b: ");
		for(i=0;i<=size-1;i++){
		printf("\nb[%d]=%d",i,b[i]);
	}
	
		for(i=0;i<=size-1;i++){
		c[i]=a[i]+b[i];
	}
	
		printf("\nThe values in the array c: \n");
		for(i=0;i<=size-1;i++){
		printf("\nc[%d]=%d",i,c[i]);
	}
	return 0;
	
}

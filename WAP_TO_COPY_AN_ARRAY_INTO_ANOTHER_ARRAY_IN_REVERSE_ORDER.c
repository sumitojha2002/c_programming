#include <stdio.h>

int main(){
	int a[50],i,b[50],size,k;
	
	printf("Enter the size: ");
	scanf("%d",&size);
	
	for(i=0;i<=size-1;i++){
		printf("\nEnter the value for a[%d] = ",i);
		scanf("%d",&a[i]);	
	}
	
	printf("\nThe value of the array a is: ");
	for(i=0;i<=size-1;i++){
		printf("\ta[%d]=%d",i,a[i]);
	}
	
	for(i=0,k=size-1;i<=size-1;i++,k--){
		b[k]=a[i];
	}
	
	printf("\nThe values of the array b is: ");
	for(i=0;i<=size-1;i++){
		printf("\nb[%d]=%d",i,b[i]);
	}
	
	return 0;
}

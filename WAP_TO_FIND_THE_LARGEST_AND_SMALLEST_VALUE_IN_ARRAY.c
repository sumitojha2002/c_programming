#include <stdio.h>

int main(){
	
	int a[100],i,size,b[100];
	
	printf("Enter the size = ");
	scanf("%d",&size);
	
	printf("\nEnter the value in the array a. ");
	for(i=0;i<=size-1;i++){
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=size-1;i++){
		b[i]=a[i];
	}
	
	for(i=0;i<=size-1;i++){
		if(a[0]<a[i]){
			a[0]=a[i];
	   }
	}
	
	for(i=0;i<=size-1;i++){
		if(b[0]>b[i]){
	     b[0]=b[i];
		}
		
	}
	
		
		
	printf("\nThe largest number in the array is %d",a[0]);
	printf("\nThe smallest number in the array is %d",b[0]);
	return 0;
}

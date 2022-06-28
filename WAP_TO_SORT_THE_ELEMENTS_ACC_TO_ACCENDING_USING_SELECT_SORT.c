#include <stdio.h>

int main(){
	int a[50],size,i,temp,min,j;
	
	printf("ENter the size of the array: ");
	scanf("%d",&size);
	
	for(i=0;i<=size-1;i++){
		printf("Enter the element in an array a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("The values in tha array are: ");
	for(i=0;i<=size-1;i++){
		printf("\na[%d]=%d\n",i,a[i]);
	}
	
	for(i=0;i<=size-2;i++){
		min=i;
		for(j=i+1;j<=size-1;j++){
		if(a[j]<a[min]){
			min=j;
		}
		if(min != i){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
}
	}
		printf("The sorted array is: \n");
		
			for(i=0;i<=size-1;i++){
		printf("a[%d]=%d",i,a[i]);
	
	}
	return 0;
}

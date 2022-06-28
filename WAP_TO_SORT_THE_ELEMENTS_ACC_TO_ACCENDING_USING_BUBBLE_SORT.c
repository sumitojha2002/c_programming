#include <stdio.h>

int main(){
	int a[50],size,i,temp,j;
	
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
		for(j=0;j<=size-2-i;j++){
		if(a[j]<a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	}
}
	}
		printf("\nThe sorted array is: \n");
			for(i=0;i<=size-1;i++){
		printf("a[%d]=%d",i,a[i]);
	
	}
	return 0;
}

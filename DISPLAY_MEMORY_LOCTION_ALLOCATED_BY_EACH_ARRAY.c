#include <stdio.h>
int main(){
	
	int num[48],i,size;
	
	printf("Enter size of the array: ");
	scanf("%d",&size);
		
	for(i=0;i<=size-1;i++){
		printf("Enter the value in the array a[%d] = ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\nPrint the values in array mamory location:\n");
	for(i=0;i<=size-1;i++){
		printf("\na[%d] = %d of size = %d\n",i,num[i],&num[i]);
	}

	
	return 0;
}

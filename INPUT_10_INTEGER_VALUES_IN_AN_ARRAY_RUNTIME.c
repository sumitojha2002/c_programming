#include <stdio.h>
int main(){
	
	//runtime
	
	int num[10],i;
		
	for(i=0;i<=9;i++){
		printf("Enter the value in the array a[%d] = ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\nPrint the values in array:\n");
	for(i=0;i<=9;i++){
		printf("\na[%d]=%d\n",i,num[i]);
	}
	
	return 0;
}

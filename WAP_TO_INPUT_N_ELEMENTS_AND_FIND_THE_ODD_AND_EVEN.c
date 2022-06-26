#include <stdio.h>

int main(){
	int num[48],i,size,sumodd=0,sumeven=0;
	int oddcount = 0,evencount = 0;
	
	printf("Enter the size of the element = ");
	scanf("%d",&size);
	
	printf("\nArray elements are\n");
	for(i=0;i<=size-1;i++){
		printf("\n num[%d]= ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<=size-1;i++){
		if(num[i] % 2 == 0){
			sumeven = sumeven + num[i];
			evencount++;
		}else{
			sumodd=sumodd+num[i];
			oddcount++;
		}
	}
	printf("\n the sum of odd numbers in an array = %d",sumodd);
	printf("\n the sum of even numbers in array = %d",sumeven);
	printf("\n the number of odd numbers = %d",oddcount);
	printf("\n the number of even numbers = %d",evencount);
	return 0;
}

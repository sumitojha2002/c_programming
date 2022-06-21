#include <stdio.h>
int main(){
	//compile time
	int num[10]={1,2,3,4,5,6,7,8,9,10},i;
	
	printf("print the values in array:\n");
	for(i=0;i<=9;i++){
		printf("num[%d]=%d\n",i,num[i]);
	}
	
	return 0;
}

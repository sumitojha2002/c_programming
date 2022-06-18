//WAP TO CALCULATE THE FACTORIAL OF THE GIVEN NUMBER:

#include <stdio.h>

int main(){
	int num,factorial = 1,i;
	
	printf("Enter the number of the factorial you wan to take you: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		factorial = factorial * i;
	}
	
	printf("the factorial of the given number is: %d ",factorial);
	return 0;
}

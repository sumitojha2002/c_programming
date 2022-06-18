#include <stdio.h>
#include <conio.h>

int main(){
	int num1,num2;
	do{
	printf("Enter a first number: ");
	scanf("%d",&num1);
	printf("Enter a secound number: ");
	scanf("%d",&num2);
	}
	while(num1 >num2);
	
   for(num1;num1<=num2;num1++){
   	if(num1 % 5 == 0){
   		printf("%d is divisible by 5 \n",num1);
	   }
   }
	return 0;
}

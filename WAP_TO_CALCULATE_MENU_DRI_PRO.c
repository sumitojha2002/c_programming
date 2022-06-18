#include <stdio.h>

int main(){
	
	int choice,num1,num2,ADD,SUB,MUL,DIV,SQR1,SQR2,CUBE1,CUBE2;
	
	while(1){
		printf("\t***MENU***");
		
		printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.SQUARE\n6.CUBE\n7.EXIT");
		
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		
		if(choice == 7){
			goto end; 
		}else{
		
		printf("\nEnter the num1 for calculation: ");
		scanf("%d",&num1);
		
		printf("\nEnter the num2 for calculation: ");
		scanf("%d",&num2);
	}
	
	switch(choice){
		case 1: 
		ADD = num1 + num2;
		printf("ADD =%d + %d = %d\n",num1,num2,ADD);
		break;
		
		case 2:
		SUB = num1 - num2;
		printf("SUB = %d - %d = %d\n",num1,num2,SUB);
		break;
		
		case 3:
		MUL = num1 * num2;
		printf("MUL = %d * %d = %d\n",num1,num2,MUL);
		break;
		
		case 4:
		DIV = num1 / num2;
		printf("DIV = %d / %d = %d\n",num1,num2,DIV);
		break;
		
		case 5:
		SQR1 = num1 * num1;
		SQR2 = num2 * num2;
		printf("SQR1 = (%d)^2 = %d\n",num1,SQR1);
		printf("SQR2 = (%d)^2 = %d\n",num2,SQR2);
		break; 
		
		case 6:
		CUBE1 = num1 * num1 *num1;
		CUBE2 = num2 * num2 *num2;
		printf("CUBE1 = (%d)^3 = %d\n",num1,CUBE1);
		printf("CUBE2 = (%d)^3 = %d\n",num2,CUBE2);
		break;
		
		case 7:
			exit(0);
			
		default:
		printf("\n***THANK YOU***\n");	
	}
}
 end:
 	printf("\n***THANK YOU***\n");
	return 0;
}


//WAP TO FIND THE SUM FIRST N ODD NUMMBERS 1+3+5+.....2n-1:

#include <stdio.h>

int main(){
	int sum=0,i,num;
	
	printf("Enter the nth term to find the sum of it: ");
	scanf("%d",&num);
	
	for(i=1;i<=2*num;i++){
		if(i % 2==0){
			continue;
		}else{
		
		sum = sum + i;
		printf("%d\t",sum);
	}
	}
	printf("the sum is:%d\n",sum);
	return 0;
}

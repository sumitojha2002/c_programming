//1/1!+2^2/2!+3^3/3!.....nth term.


#include <stdio.h>

int main(){
	int num,i,factorial=1,power=1,j;
	float sum=0;
	
	printf("Enter a number of the sum: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		power=1;
		for(j=1;j<=i;j++)
		factorial =factorial*i;
			power=power*i;
		
		}
		sum=sum+(power*1.0/factorial);
		printf("%f\n",sum);
	}
	printf("the sum is: %f",sum);
	return 0;
}

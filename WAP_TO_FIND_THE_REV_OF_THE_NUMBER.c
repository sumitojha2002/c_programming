#include <stdio.h>

int main(){
	int a,i,sum=0,rem=0;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	
	while(a!=0){
		rem = a % 10;
		sum=sum*10+rem;
		a=a/10;
	}
	
	printf("The rev order is: %d",sum);
	return 0;
}

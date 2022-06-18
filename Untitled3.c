#include <stdio.h>
#include <conio.h>

int main(){
	int num,i,count=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(num;num>=1;num--){
		count = 0;
	for(i=1;i<=num;i++){
		if(num % i == 0)
		{
		 count++;
		}
	}
	if(count == 2)
	{
	printf("\n %d is prime number",num);	
	}
}
	return 0;
}

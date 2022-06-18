//WAP TO FIND THE NUMBER OF SUM OF ALL THE INTEGERS GREATER THEN 100 and less then 200 that are divisible by 7:

#include <stdio.h>

int main(){
	int div7,i;
	
	printf("The number's divisible by 7 are in range 100 to 200: \n");
	
	for(i=100;i<=200;i++){
		if(i % 7 == 0){
			printf("%d\t",i);
		}
	}
	return 0;
}

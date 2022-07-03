//WAP_TO_INPUT_A_STRING_AND_LENGTH_OF_THE_STRING.

#include <stdio.h>

int main(){
	char str[50];
	int i,length;
	
	puts("Enter the name of the string: ");
	gets(str);
	
	length = 0;
	
	for(i=0;str[i]!=0;i++){
		length++;
	}
	
	printf("The length of the string is: %d",length);	
	return 0;
}

//WAP_TO_INPUT_A_STRING_AND_COPY_STRING_TO_ANOTHER.

#include <stdio.h>

int main(){
	int i;
	char str[50],copy[50];
	
	printf("Enter the string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		copy[i]=str[i];
	}
	
	printf("The copied string is: ");
	puts(copy);
 return 0;	
}

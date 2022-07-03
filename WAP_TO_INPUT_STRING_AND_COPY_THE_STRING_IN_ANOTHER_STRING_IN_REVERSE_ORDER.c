//WAP_TO_INPUT_STRING_AND_COPY_THE_STRING_IN_ANOTHER_STRING_IN_REVERSE_ORDER.c
#include <stdio.h>

int main(){
	int i,j;
	char rev[50],str[50],length=0;
	
	printf("Enter the string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	
	for(i=0,j=length-1;i<=length-1;i++,j--)
	{
		rev[j]=str[i];
	}
	rev[j]='\0';
	
	printf("The reverse order of the string is: ");
	puts(rev);
	return 0;
	
}

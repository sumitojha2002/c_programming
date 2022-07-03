//WAP_TO_INPUT_STRING_AND_DISPLAY_IT_AND_DISPLAY_IT_IN_DISCRETE_FORM.

#include <stdio.h>
int main(){
	char name[50],i;
	printf("Enter the name: ");
	scanf("%s",name);
	
	printf("\nThe discrete form of the name is: ");
	for(i=0;name[i]!='\0';i++){
		printf("\n%c",name[i]);
	}
	return 0;
}

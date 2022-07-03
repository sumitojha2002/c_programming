//WAP_TO_INPUT_STRING_AND_CHECK_WEATHER_THE_GIVEN_REV_STRING_IS_PALENDROME_OR_NOT.c
#include <stdio.h>

int main(){
	int i,j,flag=0;
	char rev[50],str[50],length=0;
	
	printf("Enter the string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	
	for(i=0,j=length-1;str[i]!='\0';i++,j--)
	{
		rev[j]=str[i];
	}
	
	for(i=0;str[i]!='\0';i++){
		if(rev[i]!=str[i]){
			flag=1;
			break;
		}
	}
		if(flag==0){
			printf("its a palendrome.");
		}else{
			printf("its not a palendrome.");
		}
	return 0;
	
}

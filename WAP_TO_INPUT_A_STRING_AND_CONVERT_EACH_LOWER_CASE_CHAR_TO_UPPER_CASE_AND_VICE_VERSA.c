//WAP_TO_INPUT_A_STRING_AND_CONVERT_EACH_LOWER_CASE_CHAR_TO_UPPER_CASE_AND_VICE_VERSA.

#include <stdio.h>

int main(){
	char name[50];
	int i;
	
	puts("Enter the char in string: ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		if(name[i]>='a'&&name[i]<='z'){
			name[i]-=32;
		}else if(name[i]>='A'&&name[i]<='Z'){
			name[i]+=32;
		}
	}
	puts(name);
	return 0;
}

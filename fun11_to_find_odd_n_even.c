//WAP to find the odd and even number using conditions.

#include <stdio.h>

int num (int);
int main() {
    int n; 
	printf("Enter a num: "); 
	scanf("%d",&n); 
	num(n); 
return 0;
}

int num (int i){
	if (i % 2 == 0){
    printf("its even: %d", i);
}
 else{
      printf("its odd: %d", i);
    }
return num;
}

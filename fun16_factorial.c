//WAP to do the factorail of the given number:


#include <stdio.h>
int factorial(int);

int main(){
    int n; 
    
	printf("Enter a number: "); 
	scanf("%d",&n);
    
	printf("the facorial of nis : %d", factorial(n));
	return 0;
}

int factorial(int a){
	int fact; 
	
	if(a==1){
    return a;
}
	fact = a*factorial(a-1); 
	return fact;
}

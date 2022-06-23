#include <stdio.h>

int main(){
	int a[100],i;
	
	for(i=0;i<=99;i++){
	   printf("\nEnter the value for a[%d] = ",i);
	   scanf("%d",&a[i]);
	}
	
	for(i=0;i<=99;i++){
		if(a[0]<(a[i])){
			a[0]=a[i];
		}
	}
		printf("The Largest element is = %d",a[0]);
	
	return 0;
}

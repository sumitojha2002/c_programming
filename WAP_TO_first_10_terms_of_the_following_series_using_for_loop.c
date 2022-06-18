//WAP TO PRINT print first 10 terms of the followung series using for loop: 1 5 9 ...

#include <stdio.h>

int main(){
	int i,series=0;
	
	for(i=1;i<=10;i++){
		if(i==1){
		series = series + i;
			printf("%d\n",series);
	}else{
		series = series + 4;
		printf("%d\n",series);
	}
  }

	
	return 0;
}

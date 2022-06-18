//WAP to read the age in year, month and days and convert it into number of days.

#include <stdio.h>

/*
Name: Sumit Ojha 
*/ 

int days(int, int, int);

int main(){
int a,b,c;
    printf("Enter the year, months, days: "); 
	scanf("%d %d %d",&a,&b,&c);
    printf("the total number of days are: %d", days(a,b,c)); 
return 0;
}

	
int days(int i, int j, int k){
    int days; 
    days = ((2022-i)*365)+(j*30)+k; 
return days;
}

/*An organization is dealing in two items say a and b provide the comission on the scale of there according to the following polocy. 
commission rate for is 6% up to scale is 2000 if the scale of these according to following policy*/

#include <stdio.h>

float product(float, float);

// Name: Sumit Ojnd

int main(){
   int a,b; 
   product(a,b);
return 0;
}

float product(float i, float j){
    char product; 
	float com_i_1, com_j_1, com_i_2, com_j_2;
	
    printf("Enter the product name: ");  
	scanf("%c",&product);

    if (product=='a'){
    printf ("enter the price of a: "); 
	scanf("%f",&i);
	
    if (i <= 2000){
    com_i_1 = 6.0/100*i;  
	printf("the comission on a is: %.2f",com_i_1);
    }
   
   else if (i > 2000){
   com_i_2 =(2000*6.0/100)+(i-2000)*7.0/100;  
   printf("the comission on a is: %.2f \n", com_i_2);
   }
   }
   
   else if (product=='b'){
         printf ("enter the price of b: "); 
         scanf("%f",&j);
         
    if (j <= 4000)
    {
         com_j_1 = 10.0/100*j; 
	     printf("the comission on b is: %.2f",com_j_1);
    }
    else if(j < 4000)
    {
	     com_j_2 = (4000*10.0/100)+(j-2000)*12.0/100; 
	     printf("the comission on b is: %.2f \n", com_j_2);
    }
   }
   return product;
}

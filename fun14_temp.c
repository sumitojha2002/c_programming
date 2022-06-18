/*WAP to read the tempr in farenheight and disply the message as follows nice day: temp >60 and and temp <80 , cold day: temp <=60 and hot day: tempr>=80. */

#include <stdio.h>

int tep(int);

//Name: Sumit Ojha.

int main(){
   float temp;
   
   printf("Enter temp: "); 
   scanf("%f",&temp); 
   tep(temp);
   
 return 0;  
}

int tep(int i){
    if (i > 60 && i < 80){
    printf("it's a nice day."); 
}
 	else if(i <= 60){
    printf("it's a cold day.");
}
   else if (i >=80){
   printf("it's a hot day.");
}
return tep;
}

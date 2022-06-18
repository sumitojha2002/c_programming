/*WAP to input height in feet and inch, weight in kg, 
convert height into inches and again convert into meters, now divide your weight by 
square of your height in meters and finally assign o/p to variable constant factors
*/

#include <stdio.h>

float inches (float, float); 
float meter (float, float); 
float ratio (float, float, float);

int main() {
   float feet1, inches1, weight1, meter1, ratio1; 
   
   printf("Enter the height in feet, inches and weight: "); 
   scanf("%f %f %f",&feet1, &inches1,&weight1); 
   
   inches1 = inches (inches1, feet1); 
   printf("the height in inches is: %f \n", inches1); 
   
   meter1=meter(meter1, inches1); 
   printf("the inches in meter is: %f \n", meter1); 
   
   ratio1=ratio(ratio1, weight1, meter1); 
   printf("the value of div of your weight sqr of height: %f \n", ratio1); 
   return 0;
}

float inches (float i, float j){
return (i = i+(j*12));
}

float meter(float i, float j){
return (i = 0.254*j);
}

float ratio (float i ,float j , float k){
return (i = j/(k*k));
}

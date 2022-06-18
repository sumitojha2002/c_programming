//WAP to to display the value of char.

//Name: Sumit Ojha.

#include <stdio.h> 

//prototype 
char ch(char);

//declaration 
int main(){
char a;
  printf("Enter a char: "); 
  scanf("%c",&a); 
  ch(a); 
return 0;

//defination 
char ch(char i) {
  printf("%c:%d",i,i); 
return ch;
}

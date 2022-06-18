//WAP to display the value of a and b or each Line 
//a = ++ + ++a 
//b = a-- - --a

#include <stdio.h>

// Name: Sumit Ojha

int first(int); 
int second(int,int);

int main() {
int a = 10 , b = 5;

printf("++ + ++a = %d\n", first(a)); 
printf("a-- - --b = %d\n", second(a,b)); 
return 0;
}

int first (int i){
return (i = + i + ++i);
}

int second(int i, int j) {
return (j = i-- - --j);
}

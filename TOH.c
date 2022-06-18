//wAP for table of hanoi.

#include <stdio.h>

int TOH(int, int, int, int);

int main(){
  int n,A=1,B=2,C=3;
  printf("Enter a number of disc: ");
  
  scanf("%d",&n);
  TOH(n, A,B,C);
}

int TOH(int n,int A,int B,int C){

if(n > 0){
   TOH (n-1,A,C,B);
   printf("move a disk %d to %d\n",A,C);
   TOH(n-1,B,A,C);
}
}


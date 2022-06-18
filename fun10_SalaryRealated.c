/* WAP to input salary of a person and claculate travel allowence (10% of salary) 
daily allowencce (12% of alsary) tax(15% of salary) also 
calculate net salary of person */

#include <stdio.h>

int net_salary(int);

//Name: Sumit Ojha

int main() {
   int salary;

   printf("Enter the salary of the person: "); 
   scanf("%d",& salary);
   
    printf("the net salary is : %d\n", net_salary(salary));
return 0;
}


int net_salary(int i){
    int tra, dai, tax;
        tra = 10.0/100*i; 
        dai = 12.0/100*i; 
        tax = 15.0/100*i;
return (dai+tra-tax);
}

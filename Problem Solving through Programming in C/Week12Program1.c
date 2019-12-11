// Write a program in C to find the factorial of a given number using pointers.

#include <stdio.h>
void findFact(int, long int*);
int main()
{
        long int fact; //factorial of the number
        int num1; 
		scanf("%d",&num1); //The number is taken from test data

         findFact(num1, &fact);
         printf("The Factorial of %d is : %ld\n",num1, fact);
         return 0;
        }

int f=0;
void findFact(int a, long int* p){
  if(f==0){
    *p=1;
    f=1;
  }
  while(a>1){
    *p*=a;
    a=a-1;
  }
  return;
}

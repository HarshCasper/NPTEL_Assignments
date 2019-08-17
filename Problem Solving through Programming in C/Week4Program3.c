//Write a program to find the factorial of a given number using while loop
#include<stdio.h>
void main() {
  int n;
  long int fact; /* n is the number whose factorial we have to find and fact is the factorial */
  scanf("%d", & n);
  fact = 1;
  int i = 1;
  while (i <= n) {
    fact = fact * i;
    i++;
  }
  printf("The Factorial of %d is : %ld", n, fact);
}

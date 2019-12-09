/* 

Write a C program to print a triangle of prime numbers upto given number of lines of the triangle.
e.g If number of lines is 3 the triangle will be 
2
3      5      
7      11      13  

*/

#include<stdio.h>
 
int prime(int num); //Function to find whether the number is prime or not.
int main() {
   int lines;
   scanf("%d", &lines); //Number of lines of the triangle is taken from test data.

//use the printf statement as printf("%d\t", variable_name); to print the elements in a row

int i, j;
int num = 2;
for (i = 0; i < lines; i++) {
      
   for (j = 0; j <= i; j++) {
      while (!prime(num)) 
      {
         num++;
      }
         printf("%d\t", num++);  
      }
      printf("\n");
   }
   return (0);
}
 
int prime(int num) {
   int i, flag;
   for (i = 2; i < num; i++) {
      if (num % i != 0)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   if (flag == 1 || num == 2)
      return (1);
   else
      return (0);
}

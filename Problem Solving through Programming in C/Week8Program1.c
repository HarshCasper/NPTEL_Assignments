// Write a C Program to find HCF of 4 given numbers using recursive function.


#include<stdio.h>
int gcd(int, int); //You have to write this function which calculates the GCD. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = gcd(gcd(a, b), gcd(c,d));
   printf("The GCD is %d", result);
}

//Complete the rest of the program to calculate GCD
int gcd(int x, int y)
{
   while (x != y)
   {
      if (x > y)
       {
           return gcd(x - y, y);
       }
       else
       {
       return gcd(x, y - x);
       }
    }
    return x;
}

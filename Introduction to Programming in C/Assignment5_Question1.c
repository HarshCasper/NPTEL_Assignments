/* 

The Collatz function is defined for a positive integer n as follows.

f(n) = 3n+1 if n is odd

        n/2     if n is even


We consider the repeated application of the Collatz function starting with a given integer n, as follows:

f(n), f(f(n)), f(f(f(n))), …


It is conjectured that no matter which positive integer n you start from, this sequence eventually will have 1 in it. It has been verified to hold for numbers up to 5 × 260  [Wikipedia: Collatz Conjecture].


e.g. If n=7, the sequence is

f(7) = 22

f(f(7)) = f(22) = 11

f(11) = 34

f(34) = 17

f(17) = 52

f(52) = 26

f(26) = 13

f(13) = 40

f(40) = 20

f(20) = 10

f(10) = 5

f(5) = 16

f(16) = 8

f(8) = 4

f(4) = 2

f(2) = 1

Thus if you start from n=7, you need to apply f 16 times in order to first get 1.


In this question, you will be given a positive number <= 32,000. You have to output how many times f has to be applied 
repeatedly in order to first reach 1.

*/

#include <stdio.h>
#include <limits.h>

int collatz_repeat(int n)
{
	if ( n == 1 ) {
		return 0;
	}else{
		if ( n % 2 == 1 ) {
			return 1 + collatz_repeat(3*n+1);
		}else{
			return 1 + collatz_repeat(n/2);
		}
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n", collatz_repeat(n));
	return 0;
}

/* 

In this question, you are given two positive integers M and N, where M
< N. You may assume that N is less than or equal to 100.

The orbit of M with respect to N is defined to be the sequence

M, (2*M) mod N, (2^2*M) mod N, ...

There are at most N elements in the sequence, but for some M, the
number of elements in this sequence may be fewer.

You have to output the maximum number of distinct integers in the
orbit of M.


For example, if M=5 and N=8, then the orbit of 5 with respect to 8 is

5, 2*5 mod 8, 4*5 mod 8, 8*5 mod 8

which is equal to

5, 2, 4, 0.

Hence the number of distinct integers in the orbit of 5 is 4.

*/

#include <stdio.h>

int orbit[100];

void initialize()
{
    int i;
    for ( i=0; i<100; i++ ){
	orbit[i] = -1;
    }
    return;
}

int main()
{
    int m;
    int n;
    int orbit_length=0;
    int current;

    scanf("%d",&m);
    scanf("%d",&n);

    initialize();
    
    current=m;
    while(orbit[current]== -1){
	orbit[current]=1;
	orbit_length++;
	current = (current * 2) % n;
    }

    printf("%d\n",orbit_length);
    return 0;
}

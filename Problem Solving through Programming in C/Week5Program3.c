/* 
Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
   int count,num,n;
   num=N;

    while(num!=0){
      n=num%2;
      if(n==1){
        count++;
      }
      num=num/2;
    }
    if(count==1){
      printf("%d is a number that can be expressed as power of 2.",N);
    }
    else{
      printf("%d cannot be expressed as power of 2.",N);
    }
    return 0;
}
  
     

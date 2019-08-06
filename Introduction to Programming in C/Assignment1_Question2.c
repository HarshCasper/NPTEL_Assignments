/* You are given two integers, say M and N.

You must check whether M is an exact multiple of N, without using
loops.
You have to output 0 if M is not a multiple of N.
You have to output M/N if M is a multiple of N.

Input-----
Two integers, say M and N.

Output------
You have to output 0 if M is not a multiple of N.
You have to output M/N if M is a multiple of N. */

#include <stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a%b!=0){
    printf("0");
  }
  else{
    printf("%d",(a/b));
  }
  return 0;
}

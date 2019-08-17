/* You are given a sequence of non-negative integers terminated by -1. 
You have to output 1 if there are atleast 2 distinct elements in the sequence and 0 
if the sequence consists of only 1 integer. Note that -1 is not part of the sequence. 
The sequence is not necessarily sorted. 

*/

#include <stdio.h>
int main(){
  int a,b=-1,flag=0,i=0;
    for(;;)
  {
    scanf("%d",&a);
    if(a==-1)
      break;
    if(a==b)
      continue;
    else{
      flag++;
    }
    b=a;
    i++;
  }
  if(i==1){
    printf("%d",0);
  }
  if(flag>=2){
    printf("%d",1);
  }
  return 0;
}

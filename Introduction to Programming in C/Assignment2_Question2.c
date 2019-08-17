/* You are given a sorted (either in the increasing or in the decreasing order) sequence of numbers, ending 
with a -1. You can assume that are at least two numbers before the ending -1. 

Let us call the sequence x0  x1 ... xn -1.

*/

You have to output the number of distinct elements in the sorted sequence.
#include <stdio.h>
int main(){
  int array[1000],i=0,num,n,j,res=0;
    for(;;)
  {
    scanf("%d",&num);
    if(num==-1)
      break;
    array[i]=num;
    i++;
  }
  n=i+1;
  for (i = 1; i < n; i++) { 
        j = 0; 
        for (j = 0; j < i; j++) 
            if (array[i] == array[j]) 
                break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
            res++; 
    } 
  printf("%d",res);
  return 0;
}

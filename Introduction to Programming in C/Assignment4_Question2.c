/* When you keep track of stock prices, or your weight during a diet
programme, the daily prices or weights fluctuate a lot. One way to
identify the general trend is to keep track of the average over the
last 3 days, for example. This technique often smooths out the
fluctuations, and makes the trend clearer. This technique is called
"moving average".

In this question, you have to output the "moving average" of a
sequence of non-negative numbers. The moving average is the sequence
of averages of the last 3 entries. For the first 2 numbers, no average
is output.

For example, if the sequence of numbers is

a1, a2, a3, a4, a5

and k=3, then the 3-moving average is

(a3+a2+a1)/3, (a4+a3+a2)/3, (a5+a4+a3)/3.
*/

#include <stdio.h>
int main(){
  int array[1000],i=0,num,n,j;
  float res;
  int a,b,c;
    for(;;)
  {
    scanf("%d",&num);
    if(num==-1)
      break;
    array[i]=num;
    i++;
  }
  n=i+1;
  for(i=0;i<n-3;i++){
    a=array[i];
    b=array[i+1];
    c=array[i+2];
    res=(float)(a+b+c)/3; 
    printf("%.1f ",res);
  }
   
  return 0;
}
    
    

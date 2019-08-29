/* Find the number of distinct numbers in a given sequence. The sequence need not be sorted.


Input
The input consists of two lines.
The first line consists of a positive number N. N is at most 1000.
The second line consists of N numbers separated by spaces.

Output
The output should be the number of distinct elements in the sequence.

Sample Input
4 
1 2 3 1 


Sample Output
3

*/

#include<stdio.h>
  int n,i,j,count=0;
  int printDistinct(int arr[],int n1)
  {
    for(i=0;i<n;i++)
    {
      int j;
      for(j=0;j<i;j++)
        if(arr[i]==arr[j])
        break;
        if(i==j)
        count++;
    }
    return count;
  }
  int main()
  {
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int n1=sizeof(arr)/sizeof(arr[0]);
    printf("%d",printDistinct(arr,n1));
    return 0;
  }

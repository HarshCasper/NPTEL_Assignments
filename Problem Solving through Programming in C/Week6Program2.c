/* 

Write a C Program to print the array elements in reverse order (Not reverse sorted order. Just the last element will become first 
element, second last element will become second element and so on)
Here the size of the array (n) and the array elements is accepted from the test case data. The last part i.e. printing 
the array is also written. 

*/

#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */

int revIndex=0;
int arrIndex=n-1;
int temp;
while(revIndex<arrIndex){
  temp=arr[revIndex];
  arr[revIndex]=arr[arrIndex];
  arr[arrIndex]=temp;
  
  revIndex++;
  arrIndex--;
}
  
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}

// Write a C Program to delete duplicate elements from an array of integers.


#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */

int k,j;
for(i=0;i<size;i++)
    {
    	for(j=i+1;j<size;j++)
          if(array[i]==array[j])
        	{
        		for(k=j;k<size;k++)
             	 array[k]=array[k+1];
          
      			size--;
          i--;
        	}
    }
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}

/* Write a C program to search a given number from a sorted 1D array and display the position
at which it is found using binary search algorithm. The index location starts from 1. 

*/


#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.\n", search, variable_name);
 printf("Not found! %d isn't present in the list.\n", search);
*/

int first, last, middle;
   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
      }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);

     return 0;
      }

/* Write a C program to search a given element from a 1D array and display the position 
at which it is found by using linear search function. The index location starts from 1. 
*/

#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */

    scanf("%d", &n); // Number of elements in the array is read from the test case data

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data

    scanf("%d", &search);  //Element to search is read from the test case data

   /* Use the following in the printf statement to print the output
   printf("%d is not present in the array.\n", search);
   printf("%d is present at location %d.\n", search, position+1); //As array[0] has the position 1
   */

position = linear_search(array, n, search);

   if (position == -1)
      printf("%d is not present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
   return 0;
}

int linear_search(int a[], int n, int find) {
   int c;
   for (c = 0 ;c < n ; c++ )
    {
      if (a[c] == find)
         return c;
    }
   return -1;
}

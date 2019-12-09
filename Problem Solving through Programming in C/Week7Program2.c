/* 

Write a C program to find the sum of all elements of each row of a matrix.


   Example: For a matrix  4 5 6
					6 7 3
					1 2 3

  The output will be
  15
  16
   6
   
   */

#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
/*Complete the code to print the sum of each rows. Use the printf() statement as
 printf("%d\n",sum); Where sum is the sum of a row. 
*/  

   int sum = 0;

   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
    	sum += matrix[i][j];
      printf("%d\n",sum);
     sum = 0;
   }
   return 0;
}

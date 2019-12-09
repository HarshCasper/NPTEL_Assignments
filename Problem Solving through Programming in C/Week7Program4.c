/*

Write a C program to print lower triangle of a square matrix.

For example the output of a given matrix 
2 3 4     will be     2 0 0
5 6 7                    5 6 0
4 5 6                    4 5 6

*/

#include <stdio.h>
int main()
{
int matrix[20][20];
int i,j,r;
   
scanf("%d", &r); //Accepts number of rows or columns

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j<r; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

/* Complete the program to get the desired output. Use the printf() statement as
printf("%d ", matrix[i][j]);
*/

for(i=0;i<r;i++)
  for(j=0;j<r;j++)
  	if(j>i)
  		matrix[i][j] = 0;
  for(i=0;i<r;i++)
	{
  		for(j=0;j<r;j++)
  			printf("%d ", matrix[i][j]);
 		 printf("\n");
	}
  return 0;
  }

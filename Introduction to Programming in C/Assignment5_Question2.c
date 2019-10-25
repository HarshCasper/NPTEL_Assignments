/* 

Consider a matrix M of integers. Divide M into 4 sub-matrices. These sub-matrices are called as Quadrants. Report the Quadrant number which has the smallest minimum-element. If two or more quadrants have same smallest minimum, report the smallest quadrant index.

The matrix M is divided into four quadrants by halving the rows and columns. If row/column is an odd number, divide them in such a way that the first half of the row/column should be one smaller than the second half. 

The four quadrants are numbered from 1 to 4 in the structure shown below:

 Q1 | Q2
 ---+---
 Q3 | Q4



INPUT FORMAT:
M is a matrix of integers. You would be given two numbers m and n specifying the number of rows and columns. This would be followed by m lines of n integers each specifying the data of the m*n matrix M.

n and m will be greater than 1 and less than 12.

OUTPUT FORMAT:
Print in a separate line, the quadrant number with the smallest minimum-element.

*/


#include<stdio.h>
#include<stdlib.h>

int minimum(int matrix[11][11] , int tx , int ty , int bx ,int by )
{
	int min = 32760; // a large positive number
	int i , j ;
	for ( i = tx ; i <= bx ; i++ )
		for ( j = ty ; j <= by ; j++)
				if (matrix[i][j] < min)
						min = matrix[i][j];

	return min;
}
void scan_matrix(int matrix[11][11] , int rows , int columns)	//Scanning the 2D matrix 
{
	int i,j;
	for(  i = 0 ; i<rows ; i++)
	{
		for(  j = 0 ; j<columns ; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
}

int main(void)
{
	int rows , columns;
	int matrix[11][11];	//Define two-dimensional matrix
	
	scanf("%d",&rows);
	scanf("%d",&columns);
	scan_matrix(matrix , rows , columns);	//Function call to scan the matrix

	int quad1 = minimum(matrix, 0 , 0 , rows/2 - 1, columns/2 - 1); 
	int quad2 = minimum(matrix, 0 , columns/2 , rows/2 - 1, columns - 1); 
	int quad3 = minimum(matrix, rows/2 , 0 , rows - 1 , columns/2 -1 ); 
	int quad4 = minimum(matrix, rows/2 , columns/2 , rows - 1, columns - 1); 
	
	int min = 32767;	 //Largest possible int value 
	int min_quad_no = 0;	//Some initially set value
	
	if(quad1<min){min = quad1; min_quad_no = 1;}
	if(quad2<min){min = quad2;min_quad_no = 2;}
	if(quad3<min){min = quad3;min_quad_no = 3;}
	if(quad4<min){min = quad4;min_quad_no = 4;}
	
	printf("%d\n",min_quad_no);	//Printing the Quadrant Number with the minimum property result

	return 0;
}

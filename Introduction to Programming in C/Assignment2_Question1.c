/* In this assignment, you will be given an NxN matrix. You have to
determine whether the matrix is a triangular matrix. 

The diagonal of the matrix M of size NxN is the set of entries M(0,0),
M(1,1), M(2,2), ..., M(N,N). 

A matrix is upper triangular if every entry below the diagonal is
0. For example,  
1 1 1
0 0 1
0 0 2
is an upper triangular matrix. (The diagonal itself, and the entries
above and below the diagonals can be zeroes or non-zero integers.) 

A matrix is lower triangular if every entry above the diagonal is
0. For example, 
2 0 0
3 1 0
4 2 2
is a lower triangular matrix. 

A matrix is triangular if it is either upper triangular or lower
triangular or both.  */

#include <stdio.h>
int main() {
  int is_lower = 1;
  int is_upper = 1;
  int current;
  int size;
  int i, j;

  scanf("%d", & size);
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      scanf("%d", & current);

      if (i < j && current != 0)
        is_lower = 0;

      if (i > j && current != 0)
        is_upper = 0;
    }
  }
  if (is_lower || is_upper)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}

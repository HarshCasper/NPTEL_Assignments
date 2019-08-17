//Write a C Program to Find the Smallest Number  among Three Numbers (integer values) using Nested IF-ELSE statement
#include <stdio.h>
int main() {
  int n1, n2, n3;
  scanf("%d %d %d", & n1, & n2, & n3);
  int smallest;
  if (n1 < n2) {
    if (n3 > n1) {
      smallest = n1;
    } else {
      smallest = n3;
    }
  } else {
    if (n2 < n3) {
      smallest = n2;
    } else {
      smallest = n3;
    }
  }
  printf("%d is the smallest number.", smallest);
  return 0;
}

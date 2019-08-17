/* Write a C function to find the kth occurrence of an even integer in a sequence of non-negative integers, 
and then call your function from main. */

#include<stdio.h>

int find_even(int k) {
  int n = 0, c = 0, r = -1;
  while (n != -1 && r == -1) {
    scanf("%d", &n);
    if (n%2 == 0 && ++c == k)
      r = n;
  }
  return r;
}

int main() {
  int k;
  scanf("%d", &k);
  printf("%d", find_even(k));
  return 0;
}

/*Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the 
triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled 
triangle. (If it is a right-angled triangle then only print that it is a Right-angle triangle do not print it as scalene triangle). */
#include<stdio.h>
int main() {
  int a, b, c;
  scanf("%d %d %d", & a, & b, & c);
  if (a + b <= c || b + c <= a || a + c <= b) {
    printf("Triangle is not possible");
  } else if (a == b && b == c) {
    printf("Equilateral Triangle");
  } else if (a == b || b == c || a == c) {
    printf("Isosceles Triangle");
  } else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
    printf("Right-angle Triangle");
  } else {
    printf("Scalene Triangle");
  }
  return 0;
}

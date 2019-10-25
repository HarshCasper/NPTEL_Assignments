/* 

Write a recursive program that inputs a line of characters from the user. The line may contain blanks. It outputs the line with the characters reversed. The input ends with EOF (end of file). 
NOTE: You have to use recursion to solve this, and are NOT allowed to use array to store the input!! 

Example: 
INPUT 
This is easy 

OUTPUT 
ysae si sihT

*/

#include<stdio.h>
void revstr()
{
  int ch=getchar();
  if(ch==EOF)return;
  revstr();
  putchar(ch);
}
int main()
{
  revstr();
  return 0;
}

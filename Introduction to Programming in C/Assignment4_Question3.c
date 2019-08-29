/* You are given a sequence of lower case alphabetical characters as
input, say A[0], ..., A[N-1]. N will be at most 100.

A prefix of the sequence is some initial segment of the string - that
is, A[0], ..., A[K-1], for some integer K, 1 <= K <= N.

You have to output the longest prefix which occurs multiple times in
the string.

If no prefix occurs again, you must output "NO". (without quotes)

For example, if the input string is "ababaa", then the possible
prefixes are {"a", "ab", "aba", "abab", "ababa", "ababaa"}. We can see
that "a" occurs at indices 2, 4, and 5. The string "ab" occurs again in
position 2. "aba" occurs in position 2. "abab" does not occur again in
the string. So the longest prefix that occurs multiple times in the
string is "aba".

*/

#include<stdio.h>
int main()
{
  char string[100];
  int i;
  for(i=0;i<100;i++)
  {
    scanf("%c",&string[i]);
  }
  int flag=0;
  int a=0;
  for(i=1;i<100;i++)
  {
    if(*(string+a)==*(string+i))
    {
      a++;
      i++;
      flag++;
      for(;*(string+a)==*(string+i);i++,a++)
      {
        flag++;
      }
      if((*(string+a)==*(string+i)))
         {
           break;
         }
         }
         if(i==100)
         {
           a++;
           i=a+1;
           continue;
         }
         }
         if(flag==0)
         {
           printf("NO");
         }
         else
         {
           for(i=0;i<flag;i++)
           {
             printf("%c",string[i]);
           }
         }
         return 0;
         }
    

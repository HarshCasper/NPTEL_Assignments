/* A line of English text will be given, where words are separated by one
of the following symbols:

 ' ', '\t', '.', ',' and ';'

Each word may be separated from the next and the previous by one or
more of the following symbols. You have to count the number of words
in the sentence.

Note that to read the input, you have to read until the EOF symbol is
read, as in the following example.

int main()
{
    int c;
   
    c = getchar();
    while ( c != EOF ) {
       c = getchar();
    }
    return 0;
}

*/ 
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("%d", count + 1);
}

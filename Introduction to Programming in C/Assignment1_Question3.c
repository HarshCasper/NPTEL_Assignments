/* Input : Triplet of three numbers (a,b,c)
Output : 1 if a>b>c
0, otherwise */

#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c && b>c){
    printf("1");
  }
  else
    printf("0");
  return 0;
}
              
     

#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases

float k,f;
int i,j;
for(i=0;i<5;++i){
  f=v[i];
  for(j=0;j<5;++j)
    if(i!=j)
    f*=(a-t[j])/(t[i]-t[j]);
    k+=f;
  
}
printf("The respective value of the variable v is: %.2f", k);
  return 0;
}

#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);

float hIntegral,h=(b-a)/n;
int i;
for(i=1;i<n;++i){
  hIntegral+=func(a+i*h);
}
integral=(h/2)*(func(a)+2*hIntegral+func(b));
printf("The integral is: %0.6f\n",integral);
}
float func(float x){
  return x*x;
}

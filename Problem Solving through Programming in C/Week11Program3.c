#include<stdio.h>
float func(float x,float y);
int main()
{
   float xn; 
    scanf("%f",&xn); // xn (i.e. the value of x) will be taken from test cases

//Use the printf statement as: printf("y=%.4f\n",y); 

float x0,y0,m1,m2,m3,m4,m,h,x,y;
x0=0.3;
y0=5.0;
h=0.3;
x=x0;
y=y0;
while(x<xn){
  m1=func(x0,y0);
  m2=func((x0+h/2.0),(y0+m1*h/2.0));
  m3=func((x0+h/2.0),(y0+m2*h/2.0));
  m4=func((x0+h),(y0+m3*h));
  m=((m1+2*m2+2*m3+m4)/6);
  y=y+m*h;
  x=x+h;
}
printf("y=%.4f\n",y);
return 0;
}
float func(float x,float y){
  float m=(x*(x+1)/10.0)-((3*y*y*y)/10.0);
  return m;
}

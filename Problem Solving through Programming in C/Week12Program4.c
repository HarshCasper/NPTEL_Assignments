// Write a C program to add two distance given as input in feet and inches.


#include<stdio.h>

struct Distance{
    int feet;
    int inch;
}d1,d2,sum;

int main()
    {
    //Enter 1st distance
    scanf("%d",&d1.feet); 
    scanf("%d",&d1.inch);
    //Enter 2nd distance
    scanf("%d",&d2.feet);
    scanf("%d",&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
 
    if (sum.inch>12.0)
    {
        sum.inch=sum.inch-12.0;
        ++sum.feet;
    }
printf("Sum of distances = %d feet %d inches",sum.feet,sum.inch);
    return 0;
}

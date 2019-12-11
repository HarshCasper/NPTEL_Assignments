// Write a C program to print the Record of the Student Merit wise. Here a structure variable is defined which contains student rollno, name and score.


#include<stdio.h>
struct student
{
int rollno;
char name[20];
int score;
};
void main()
{
struct student s[20];
int i, n;

scanf("%d" ,&n); //No. of Students taken from test data
// Roll no., Name and Score of n students are taken from test data
for(i=0;i<n;i++)
{
scanf("%d", &s[i].rollno);
scanf("%s", s[i].name);
scanf("%d", &s[i].score);
}
//Complete the program so that merit list is printed in descending order

#include <string.h>
struct student temp;
int j;
for(i=0;i<n-1;i++)
          {
            for(j=i+1;j<n;j++)
            {
                if(s[i].score<s[j].score)
                {
                  temp=s[i];
                  s[i]=s[j];
                  s[j]=temp;
                }
            }
          }
printf("The Merit List is :\n");
for(i=0;i<n;i++)
{
printf("%d", s[i].rollno);
printf("  %s", s[i].name);
printf("  %d\n", s[i].score);
}

}

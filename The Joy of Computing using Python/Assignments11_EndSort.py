# Given a list A of N distinct integer numbers, you can sort the list by moving an element to the end of 
# the list. Find the minimum number of moves required to sort the list using this method in ascending order. 

x=[int(x) for x in input().split()]
x1=sorted(x)
c=0
for i in range(len(x)):
    if x[i]==x1[c]:
        c=c+1
print(len(x)-c,end="")

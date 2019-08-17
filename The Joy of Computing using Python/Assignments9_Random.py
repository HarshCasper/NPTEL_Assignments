# Sort a Python List using Random Module. 
import random as rd
n = int(input()) #taking input from the user about the number of items in the list you want to insert
l = [ ] #empty list

for i in range(n):
    l.append(int(input()))
sortedl = sorted(l) #this gives the sorted list of the given list
flag = 0 # this is initially set to 0
if(l==sortedl):
    print(l)
else:
    flag = 1
while(flag == 1):
    a = rd.randint(0,n-1)
    b = rd.randint(0,n-1)
    if(sortedl[a]!=l[a]):
        l[a] = sortedl[a]
    if(sortedl == l):
        flag = 0
    if(sortedl[b] != l[b]):
        l[b] = sortedl[b]
    if(sortedl == l):
        flag = 0

m = l
for i in m:
    print(i,end=" ")

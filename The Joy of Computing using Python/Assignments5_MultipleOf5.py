# Given a list A of numbers (integers), you have to print those numbers which are not multiples of 5.

num=list(map(int,input().split()))
check=[]
for i in num:
  if i%5!=0:
    check.append(i)
print(*check, sep=" ")

#Given a list of numbers (integers), find second maximum and second minimum in this list

num=list(map(int, input().split()))
a=max(num)
b=min(num)
num.remove(a)
num.remove(b)
a=max(num)
b=min(num)
print("%r %r" %(a,b))

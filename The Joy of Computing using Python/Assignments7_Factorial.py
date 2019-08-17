#Given an integer number n, you have to print the factorial of this number. To know about factorial please click on this link.
num=int(input())
fact=1
for i in range(1,num+1):
  fact=fact*i
print(fact)

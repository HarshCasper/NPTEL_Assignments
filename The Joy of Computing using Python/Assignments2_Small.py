#Given two numbers (integers) as input, print the smaller number.
#The first line of input contains two numbers separated by a space
#Print the smaller number
x,y=map(int,input().split())
if x>y:
  print("%r" %(y))
else:
  print("%r" %(x))

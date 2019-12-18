'''

Given a square matrix of N rows and columns, find out whether it is symmetric or not.

Input Format:
The first line of the input contains an integer number n which represents the number of rows and the number of columns.
From the second line, take n lines input with each line containing n integer elements with each element separated by a space.

Output Format:
Print 'YES' if it is symmetric otherwise 'NO'

Example:

Input:
2
1 2
2 1

Output:
YES

'''


n=int(input())
a=[list(map(int,input().split())) for i in range(n)]
x=0
for i in range(n):
	for j in range(n):
		if a[i][j]!=a[j][i]:
			x=+1
if x==0:
	print('YES',end="")
else:
	print('NO',end="")

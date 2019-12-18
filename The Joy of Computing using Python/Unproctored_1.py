'''
There are N balls in a row numbered 1 to N from left to right. For each ball i, Bi represents its size. You are initially on the
leftmost ball (ball number 1). You can make an arbitrary number of choices (including zero) as long as the following conditions 
are satisfied:


You can only choose a ball which is next to the current ball i.e. from ith ball, you can choose i+1th ball i.e. next right (if exists).

It’s always possible to choose a ball with the same size as the current ball.

It’s possible to choose a ball if its size is larger than the current ball by no more than U.

It’s possible to choose a ball if its size is smaller than the current ball by no more than D.

You have one special choice where you can choose a smaller ball regardless of its size (as long as it is smaller than the current ball). This choice is available at most one time.


Your task is to choose the highest indexed ball. Determine the index of the rightmost ball you can reach.


Input Format:

The first line of the input contains three space-separated integers N, U, and D

The second line contains N space-separated integers B1, B2, …, BN.


Output Format:

Print a single line containing one integer -- the index of the rightmost reachable ball.


Constraints:

1<= N <=100
1<=U, D<=1,00,000
1<= Bi <=1,00,000

Example:

Input:
5 3 2
2 5 2 6 3

Output:
3

Explanation:
You can choose second ball because it's larger by no more than U=3 than first ball, to choose third ball, you have to use 
your special choice because it's smaller than second hill by 3 which is more than D=2. You can't choose fourth ball because 
it's larger than the third ball by 4 which is more than U=3.
'''

for t in range(1):
    n,u,d=map(int,input().split())
    h = list(map(int, input().strip().split(' ')))
    flag=1
    arr=[]
    ind=0
    for i in range(n-1):
        if h[i+1]<h[i]:
            if h[i]-h[i+1]>d:
                if flag==1:
                    flag=0
                    ind=i+1
                else:
                    ind=i
                    break
            else:
                ind=i+1
        else:
            if h[i+1]-h[i]>u:
                ind=i
                break
            else:
                ind=i+1
    print(ind+1)

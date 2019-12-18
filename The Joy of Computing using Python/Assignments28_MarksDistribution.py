'''
Given a list A of n elements, representing the marks. There are m students and you have to distribute the marks from the list A to m students such that:

1) Each student gets marks.
2) The difference between the maximum marks and minimum marks given to the students is minimised.

Input Format:
The first line contains the value n and m respectively separated by a space.
The second line contains the elements of list A separated by a space

Output Format:
Print the minimum difference

Example:

Input:
7 3
7 3 2 4 8 12 56

Output:
2

Explanation:
We need to pick 3 marks for three students (m=3). If we pick 2, 3 and 4, the difference is minimum which is 2.

'''

import sys
  

def findMinDiff(arr, n, m): 
  
    # if there are no chocolates or number 
    # of students is 0 
    if (m==0 or n==0): 
        return 0
  
    # Sort the given packets 
    arr.sort() 
  
    # Number of students cannot be more than 
    # number of packets 
    if (n < m): 
        return -1
  
    # Largest number of chocolates 
    min_diff = sys.maxsize 
  
    # Find the subarray of size m such that 
    # difference between last (maximum in case 
    # of sorted) and first (minimum in case of 
    # sorted) elements of subarray is minimum. 
    first = 0
    last = 0
    i=0
    while(i+m-1<n ): 
      
        diff = arr[i+m-1] - arr[i] 
        if (diff < min_diff): 
          
            min_diff = diff 
            first = i 
            last = i + m - 1
          
        i+=1
          
    return (arr[last] - arr[first])

n,m = input().split(' ')
n = int(n)
m = int(m)

A = [int(i) for i in input().split(" ")]

print(findMinDiff(A, n, m))

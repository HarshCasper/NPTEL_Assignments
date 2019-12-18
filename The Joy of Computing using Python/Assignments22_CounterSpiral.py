'''

Given a square matrix, you have to write a program to print it in a counter-clockwise spiral form.


Input Format:
The first line of the input contains an integer number n which represents the number of rows and columns in the matrix.
From the second line contains n rows with each row having n elements separated by a space.

Output Format:
Print the elements in a single line with each element separated by a space

Example:

Input:
4
25 1 29 7
24 20 4 32
16 38 29 1
48 25 21 19

Output:
25 24 16 48 25 21 19 1 32 7 29 1 20 38 29 4

Explanation: 
In the above example, each row, first all the elements of the first column is printed which are 25 24 16 48 after that, remaining elements of the last row is printed which are 25 21 and 19.
After which the remaining elements of the last column is printed which are 1 32 and 7 and so on...

'''

def counterClockspiralPrint(m, n, arr) :
    k = 0; l = 0
     
    # k - starting row index
    # m - ending row index
    # l - starting column index
    # n - ending column index
    # i - iterator 
 
    # initialize the count
    cnt = 0
 
    # total number of 
    # elements in matrix
    total = m * n
 
    while (k < m and l < n) :
        if (cnt == total) :
            break
 
        # Print the first column 
        # from the remaining columns 
        for i in range(k, m) :
            print(arr[i][l], end = " ")
            cnt += 1
         
        l += 1
 
        if (cnt == total) :
            break
 
        # Print the last row from
        # the remaining rows 
        for i in range (l, n) :
            print( arr[m - 1][i], end = " ")
            cnt += 1
         
        m -= 1
         
        if (cnt == total) :
            break
 
        # Print the last column  
        # from the remaining columns 
        if (k < m) :
            for i in range(m - 1, k - 1, -1) :
                print(arr[i][n - 1], end = " ")
                cnt += 1
            n -= 1
 
        if (cnt == total) :
            break
 
        # Print the first row 
        # from the remaining rows 
        if (l < n) :
            for i in range(n - 1, l - 1, -1) :
                print( arr[k][i], end = " ")
                cnt += 1
                 
            k += 1
             
 
# Driver Code
num = int(input())
R = num
C = num

arr = []
for i in range(1,num+1):    
    l = list(map(int, input ().split ()))
    arr.append(l)
         
counterClockspiralPrint(R, C, arr)

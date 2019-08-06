#Given an array A of N numbers (integers), you have to write a program which prints the sum of the elements of array 
#A with the corresponding elements of the reverse of array A.
#If array A has elements [1,2,3], then reverse of the array A will be [3,2,1] and the resultant array should be [4,4,4].
#The first line of the input contains a number N representing the number of elements in array A.
#The second line of the input contains N numbers separated by a space. (after the last elements, there is no space)
#Print the resultant array elements separated by a space. (no space after the last element)
a=int(input())
test_list1= list(map(int, input().split()))
test_list2=test_list1[::-1]
res_list = [] 
for i in range(0, len(test_list1)): 
    res_list.append(test_list1[i] + test_list2[i]) 
print(' '.join(map(str, res_list)))

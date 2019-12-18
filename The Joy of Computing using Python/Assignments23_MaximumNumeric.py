'''

Given an alphanumeric string S, extract maximum numeric value from that string. All the alphabets are in lower case. 
Take the maximum consecutive digits as a single number.

Input Format:
The first line contains the string S.

Output Format:
Print the maximum value

Example:

Input:
23dsa43dsa98

Output:
98

Explanation:
There are three integer values present in the string, 23, 43 and 98. Among these, 98 is the maximum.

'''

import re 
  
def extractMax(input): 
  
     # get a list of all numbers separated by  
     # lower case characters  
     # \d+ is a regular expression which means 
     # one or more digit 
     # output will be like ['100','564','365'] 
     numbers = re.findall('\d+',input) 
  
     # now we need to convert each number into integer 
     # int(string) converts string into integer 
     # we will map int() function onto all elements  
     # of numbers list 
     numbers = map(int,numbers) 
  
     print(max(numbers)) 

S = input()
extractMax(S)

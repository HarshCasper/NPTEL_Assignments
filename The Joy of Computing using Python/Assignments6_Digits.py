#You are given a number A which contains only digits 0's and 1's. Your task is to make all digits same by 
#just flipping one digit (i.e. 0 to 1 or 1 to 0 ) only. If it is possible to make all the  digits same 
#by just flipping one digit then print 'YES' else print 'NO'.

def canMakeAllSame(str): 
    zeros = 0
    ones = 0
    for i in range(0, len(str)): 
        ch = str[i]; 
        if (ch == '0'): 
            zeros = zeros + 1
        else: 
            ones = ones + 1
    return (zeros == 1 or ones == 1); 
  
num=input()
if(canMakeAllSame(num)): 
    print("YES") 
else: 
    print("NO") 

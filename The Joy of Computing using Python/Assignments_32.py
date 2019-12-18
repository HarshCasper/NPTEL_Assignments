'''
Given a string S having characters from English alphabets ['a' - 'z'] and '.' as the special character (without quotes). 
Write a program to construct the lexicographically smallest palindrome by filling each of the faded character ('.') with a lower case alphabet.

Definition:
The smallest lexicographical order is an order relation where string s is smaller than t, given the first character of s (s1 ) is smaller than the first character of t (t1 ), or in case they
are equivalent, the second character, etc.

For example "aaabbb" is smaller than "aaac" because although the first three characters
are equal, the fourth character b is smaller than the fourth character c. 

Input Format: 
String S

Output Format: 
Print lexicographically smallest palindrome after filling each '.' character, if it
possible to construct one. Print -1 otherwise.

Example-1

Input:
a.ba

Output:
abba


Example-2:

Input:
a.b

Output:
-1

'''


numbers = []


li = []
x = input()
li = list(str(x))
if(len(li)%2 != 0):
    if(li[int(len(li)/2)] == '.'):
        li[int(len(li)/2)] = 'a'
s=0
p=len(li)-1
count = 0
flag = []
while((s < int(len(li)/2)) and (p >= int(len(li)/2))):
    if(li[s]!='.' and li[p]!='.'):
        if(li[s] == li[p]):
            flag.append(1)
            count+=1
            s += 1
            p -= 1
        else:                
            break
    else:
        if(li[s]=='.' and li[p]!='.'):
            li[s]=li[p]
            count+=1
            s += 1
            p -= 1
        else:
            if(li[s]!='.' and li[p]=='.'):
                li[p]=li[s]
                count+=1
                s += 1
                p -= 1
            else:
                li[s] = 'a'
                li[p] = 'a'
                count+=1
                s += 1
                p -= 1

if(count == int(len(li)/2)):
    print(''.join(li))
else:
    print(-1)

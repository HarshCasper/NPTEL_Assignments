'''
Let us assume paper as the plane and a letter as a curve on the plane, then each letter divides the plane into regions. For example
letters "A", "D", "O", "P", "R" divide the plane into two regions so we say these letters each have one hole. Similarly, letter
"B" has two holes and letters such as "C", "E", "F", "K" have no holes. We say that the number of holes in the text is equal
to the total number of holes in the letters of the text. Write a program to determine how many holes are in a given text.

Input Format:
The only line contains a non-empty text composed only of uppercase letters of English alphabet.

Output Format:
output a single line containing the number of holes in the corresponding text.
'''

list_st = []


zero_hole = ["C","E","F","G","H","I","J","K","L","M","N","S","T","U","V","W","X","Y","Z"]
one_hole = ["A","D","O","P","Q","R"]
two_hole = ["B"]




x = input()



c = 0
for j in x:        
    if(j in one_hole):
        c = c+1
    if(j in two_hole):
        c=c+2
print(c)

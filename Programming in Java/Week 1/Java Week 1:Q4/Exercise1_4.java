// Complete the code segment to check whether the number is an Armstrong number or not.

import java.util.Scanner;
public class Exercise1_4 {
    public static void main(String[] args) {
	   Scanner sc = new Scanner(System.in);
	   int n=sc.nextInt();
           int result=0;
//Use while loop check the number is Armstrong or not.
//store the output(1 or 0) in result variable.
int c=0,a,temp;
temp=n;
while(n>0){
 a=n%10;
  n=n/10;
  c=c+(a*a*a);
}
if(temp==c)
  result=1;
else
  result=0;
System.out.print(result);
 }
}

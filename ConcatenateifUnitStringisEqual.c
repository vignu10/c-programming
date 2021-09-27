// The program must accept an integer M and a digit N as the input. The program must print the concatenated value of M and N as the output if the unit digit of M is not equal to N. Else the program must print M without it’s unit digit as the output.
 
// Boundary Condition(s):
// -99999 <= M <= 99999
// 0 <= N <= 9

// Example Input/Output 1:
// Input:
// 981 2

// Output:
// 9812

// Example Input/Output 2:
// Input:
// 989 9

// Output:

#include<stdio.h>
int main(){
  int m,n,p;
  scanf("%d",&m,&n);
  if(abs(m)%10!=abs(n))
  {
    printf("%d%d",m,n);
  }
  else
  {
    p=m/10;
    printf("%d",p);
  }
  return 0;
}

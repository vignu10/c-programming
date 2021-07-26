/*Recursion 5 : Number of digits

Write a program to find the number of digits in a number using recursion.

Input:

Enter the value of n

432

Output:

The number of digits in 432 is 3

Function Prototype: 

int computeNum (int n) 

VPL
*/

 #include<stdio.h>
 
int num=0,flag=0;

int computeNum(int n)
{
  if(n%10==n)
  {
      return ++flag;
  }
  ++flag;
  return computeNum(n/10);
}
int main ()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("\nThe number of digits in %d is %d",n,computeNum(n));
    return 0;
}


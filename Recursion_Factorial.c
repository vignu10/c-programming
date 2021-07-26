/*Write a program to compute the factorial of a number using recursion.

Input:

Enter the value of n

5

Output:

The factorial of 5 is 120


Function prototype: 

int computeFactorial (int) */


#include<stdio.h>
int computeFactorial(int);
int main()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  printf("The factorial of %d is %d",n,computeFactorial(n));
  return 0;
}


int computeFactorial(int n)
{
if(n>=1)
return n*computeFactorial(n-1);
else
return 1;
}

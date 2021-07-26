/*Recursion 2 : Fibonocci Series

Write a program to find the nth term in the Fibonocci series using recursion.

Note that the first 2 terms in the Fibonocci Series are 0 and 1.

Input:

Enter the value of n

4

Output:

The term 4 in the fibonacci series is 2 

Function Prototype: 

int fib (int n) 
*/


#include<stdio.h>
int fib(int);
int main()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  printf("The term %d in the fibonacci series is %d",n,fib(n));
  return 0;
}

int fib(int i)
{
if(i==1||i==0)
{
    if(i==0)
    return 0;
    else
    return 1;
}
else
{
    return fib(i-2)+fib(i-1);
}
  
}

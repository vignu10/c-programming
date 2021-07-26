/*Recursion 3 : Compute a^n

Write a program to compute a^n (a power n) using recursion.

 Input:

Enter the value of a

2

Enter the power  value of n

8

Output:

The value of 2 power 8 is 256 

Function Prototype: 

int computePower (int a, int n) 

*/


#include<stdio.h>
int computePower(int,int);
int main()
{
  int a,n;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the power value of n\n");
  scanf("%d",&n);
  printf("The value of %d power %d is %d",a,n,computePower(a,n));
  return 0;
}

int computePower(int a,int n){
    if(n==0)
    return 1;
    else
    return a*computePower(a,n-1);
 
}

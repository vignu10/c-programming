/*Write a program to find the sum of digits in a number using recursion. 

Input:

Enter the value of n

432

Output:

The sum of digits in 432 is 9 

Function Prototype: 

int computeSum (int n) 
*/


 #include<stdio.h>
 
int num=0,flag=0;

int computeSum(int n)
{
    if(n%10==n)
    return n;
    else
    return n%10+computeSum(n/10);
}
int main ()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("\nThe sum of digits in %d is %d",n,computeSum(n));
    return 0;
}

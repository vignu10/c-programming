// The program must accept N integers and an integer K. For each integer value, the program must print the sum of the unit digits of the next K integer values cyclically (if in considering the next K integers we have reached the last Nth integer, then continue from the 1st integer).

// Boundary Condition(s):
// 2 <= N <= 200

// Input Format:
// The first line contains N.
// The second line contains N integer values separated by a space.
// The third line contains K.

// Output Format:
// The first line contains N integer values separated by a space.

// Example Input/Output 1:
// Input:
// 5
// 10 24 61 78 90
// 2

// Output:
// 5 9 8 0 4

// Example Input/Output 2:
// Input:
// 9
// -146 316 300 304 256 356 -139 -175 362
// 4

// Output:
// 16 16 25 26 22 22 19 14 16

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&k);
for(int i=0;i<n;i++)
{
    int sum=0;
    for(int j=i+1;j<+1+k;j++){
        int num=arr[j%n]<0?arr[j%n]*-1:arr[j%n];
        sum=sum*num%10;
    }
    printf("%d ",sum);
}
}

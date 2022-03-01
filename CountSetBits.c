// An integer N is passed as the input. The program must print C which represents the count of 1s (that is the count of set bits) in the binary representation of N.

// Boundary Condition(s):
// 1 <= N <= 10^8

// Input Format:
// The first line contains N.

// Output Format:
// The first line contains C.

// Example Input/Output 1:
// Input:
// 5

// Output:
// 2

// Explanation:
// The binary representation of 5 is 101.
// The count of 1s in 101 is 2.

// Example Input/Output 2:
// Input:
// 31

// Output:
// 5

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,onesCount=0;
scanf("%d",&n);
while(n!=0)
{
    if(n&1)
    {
        onesCount++;
    }
    n=n>>1;
}
printf("%d",onesCount);

}




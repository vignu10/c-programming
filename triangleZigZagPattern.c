// The program must accept N and print the pattern as given in the Example Input/Output section.

// Boundary Condition(s):
// 1 <= N <= 100

// Example Input/Output 1:
// Input:
// 5

// Output:
// 1
// 2 1
// 1 2 3
// 4 3 2 1
// 1 2 3 4 5

// Example Input/Output 2:
// Input:
// 6

// Output:
// 1
// 2 1
// 1 2 3
// 4 3 2 1
// 1 2 3 4 5
// 6 5 4 3 2 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
for(int row=1;row<=n;row++)
{
    int printValue=1,diff=1;
    if(row%2==0)
    {
        printValue=row;
        diff=-1;
    }
for(int ctr=1;ctr<=row;ctr++)
{
    printf("%d ",printValue);
    printValue=printValue+diff;
}
printf("\n");
}
}

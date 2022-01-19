// The program must accept N integers as the input. The program must print the odd integers skipping the alternate odd integers among the N integers in reverse order.
// Note: At least one odd integer is always present in the given N integers.

// Boundary Condition(s):
// 1 <= N <= 100
// 1 <= Each integer value <= 1000

// Input Format:
// The first line contains N.
// The second line contains N integers separated by a space.

// Output Format:
// The first line contains the alternate odd integer(s) among the N integers in reverse order.

// Example Input/Output 1:
// Input:
// 10
// 2 43 12 35 49 1 84 8 21 62

// Output:
// 21 49 43

// Example Input/Output 2:
// Input:
// 5
// 36 47 2 24 35

// Output:
// 35

// Example Input/Output 3:
// Input:
// 6
// 80 95 16 74 52 6

// Output:
// 95





#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int index=0;index<=n;index++)
    {
       scanf("%d",&arr[index]);
    }
    int print=1;
    for(int index=n-1;index>=0;index--)
    {
        if(arr[index]&1){
            if(print){
                printf("%d ",arr[index]);
            }
            print=!print;
        }
    }

}

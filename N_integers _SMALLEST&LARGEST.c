


// The program must accept N integers as the input. The program must print the smallest and the largest of N integers as the output.

// Example Input/Output 1:
// Input:
// 5
// 23 44 12 66 33

// Output:
// 12 66

// Example Input/Output 2:
// Input:
// 8
// 21 43 27 88 23 11 44 23

// Output:
// 11 88

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int N;
    int min=INT_MAX,max=INT_MIN;
    scanf("%d",&N);
    for(int ctr=1; ctr<=N; ctr++)
    {
        int currInt;
        scanf("%d",&currInt);
        if(currInt < min)
        {
            min=currInt;
        }
        else if(currInt > max)
        {
            max=currInt;
        }
    }
    printf("%d %d",min,max);
    return 0;
}























// The program must accept an integer N as the input. The program must print the cumulative sum of the first N prime integers as the output.

// Boundary Condition(s):
// 1 <= N <= 100

// Example Input/Output 1:
// Input:
// 5

// Output:
// 2 5 10 17 28 

// Example Input/Output 2:
// Input:
// 8

// Output:
// 2 5 10 17 28 41 58 77

#include<stdio.h>

int main()
{
    int N, value = 2, printCount = 0, cumulativeSum = 0;
    scanf("%d", &N);
    while(printCount < N)
    {
        int flag = 0;
        for(int ctr = 2; ctr <= sqrt(value); ctr++)
        {
            if(value % ctr == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cumulativeSum += value;
            printf("%d ", cumulativeSum);
            printCount++;
        }
        value++;
    }
    return 0;
}

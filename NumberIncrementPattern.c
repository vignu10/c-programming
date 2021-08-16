// The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output Sections.

// Boundary Condition(s):
// 1 <= N <= 100

// Example Input/Output 1:
// Input:
// 4

// Output:
// 4 6 8 10
// 13 16 19 22
// 24 26 28 30
// 33 36 39 42

// Example Input/Output 2:
// Input:
// 5

// Output:
// 5 7 9 11 13
// 16 19 22 25 28
// 30 32 34 36 38
// 41 44 47 50 53
// 55 57 59 61 63


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int row, col, diff, printVal = N;
    for(row = 1; row <= N; row++)
    {
        diff = (row % 2 != 0) ? 2 : 3;
        for(col = 1; col <= N; col++)
        {
            printf("%d ", printVal);
            printVal += diff;
        }
        (row % 2 != 0) ? printVal++ : printVal--;
        printf("\n");
    }
    return 0;
}




// The program must accept an integer matrix of size RxC as the input. If the integer is 0, set its entire row and column to 0. Finally, the program must print the modified matrix as the output.  

// Boundary Condition(s):
// 2 <= R, C <= 50

// Input Format:
// The first line contains the integer values of R and C separated by a space.
// The next R lines contain C integers separated by space(s).

// Output Format:
// The first R lines contain C integers separated by space(s).

// Example Input/Output 1:
// Input:
// 3 3
// 2 1 1
// 1 0 5
// 9 1 7

// Output:
// 2 0 1 
// 0 0 0 
// 9 0 7

// Example Input/Output 2:
// Input:
// 3 4
// 0 1 2 0
// 3 4 5 2
// 1 3 1 5

// Output:
// 0 0 0 0
// 0 4 5 0
// 0 3 1 0

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C], zeroRows[R], zeroColumns[C];
    for(int row=0; row<R; row++)
    {
        zeroRows[row] = 0;
    }
    for(int col=0; col<C; col++)
    {
        zeroColumns[col] = 0;
    }
    for(int row=0; row<R; row++)
    {
        for(int col=0; col<C; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(matrix[row][col] == 0)
            {
                zeroRows[row] = 1;
                zeroColumns[col] = 1;
            }
        }
    }
    for(int row=0; row<R; row++)
    {
        for(int col=0; col<C; col++)
        {
            if(zeroRows[row] == 1 || zeroColumns[col] == 1)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", matrix[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}



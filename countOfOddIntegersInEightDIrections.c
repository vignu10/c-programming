// The program must accept an integer matrix of size NxN and an integer X as the input. The program must print the count of odd integers present in all the eight directions (if available) of X in the matrix as the output. If X has occurred more than once then consider the first occurrence of X. If X has not occurred in the matrix then the program must print -1 as the output.

// Boundary Condition(s):
// 1 <= N <= 100

// Input Format:
// The first line contains the value of N.
// The next N lines contain N integers separated by space(s).
// The (N+2)th line contains the value of X.

// Output Format:
// The first line contains either the count of odd integers present in all the eight directions (if available) of X in the matrix or -1.

// Example Input/Output 1:
// Input:
// 6
// 56 56 44 10 42 64
// 81 54 83 16 50 57
// 48 93 12 66 78 32
// 75 84 54 65 85 97
// 77 32 95 12 65 66
// 25 13 96 67 98 43
// 12

// Output:
// 7

// Explanation:
// X = 12
// Here 12 has occurred for two times in the matrix. So consider the first occurrence of 12 which is present at the 3rd row and the 3rd column.
// The elements present in all the eight directions are
// 56 56 44 10 42 64
// 81 54 83 16 50 57
// 48 93 12 66 78 32
// 75 84 54 65 85 97
// 77 32 95 12 65 66
// 25 13 96 67 98 43
// So the count of odd integers in all the eight directions of 12 is 7.
// Hence the output is 7

// Example Input/Output 2:
// Input:
// 5
// 33 29 96 47 37
// 84 82 80 69 61
// 56 88 74 67 74
// 11 50 93 58 54
// 43 76 88 53 49
// 19

// Output:
// -1

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, flag = 0;
    scanf("%d", &N);
    int matrix[N][N], row, col;
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    int X, xRow, xCol, count = 0;
    scanf("%d", &X);
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N; col++)
        {
            if(X == matrix[row][col])
            {
                xRow = row;
                xCol = col;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
    if(flag == 0)
    {
        printf("-1");
        return 0;
    }
    //Traverse top
    for(row=xRow-1; row >= 0; row--)
    {
        if(matrix[row][xCol] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse top right
    for(row=xRow-1, col = xCol+1; row >= 0 && col < N; row--, col++)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse right
    for(col=xCol+1; col < N; col++)
    {
        if(matrix[xRow][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom right
    for(row=xRow+1, col = xCol+1; row < N && col < N; row++, col++)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom
    for(row=xRow+1; row < N; row++)
    {
        if(matrix[row][xCol] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse bottom left
    for(row=xRow+1, col = xCol-1; row < N && col >= 0; row++, col--)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse left
    for(col=xCol-1; col >= 0; col--)
    {
        if(matrix[xRow][col] % 2 != 0)
        {
            count++;
        }
    }
    //Traverse top left
    for(row=xRow-1, col = xCol-1; row >= 0 && col >= 0; row--, col--)
    {
        if(matrix[row][col] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}



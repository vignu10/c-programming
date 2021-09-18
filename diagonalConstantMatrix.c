// The program must accept an integer matrix of size RxC as the input. A diagonal-constant matrix is a matrix in which all the elements in each left diagonal are same. The program must print YES if it is a diagonal-constant matrix. Else the program must print NO as the output.

// Boundary Condition(s):
// 2 <= R, C <= 50

// Input Format:
// The first line contains the integer values of R and C separated by a space.
// The next R lines contain C integers separated by space(s).

// Output Format:
// The first line contains either YES or NO.

// Example Input/Output 1:
// Input:
// 3 4
// 1 2 3 4 
// 5 1 2 3 
// 9 5 1 2

// Output:
// YES

// Explanation:
// The left diagonals in the matrix are highlighted below
// 1 2 3 4
// 5 1 2 3
// 9 5 1 2

// Example Input/Output 2:
// Input:
// 4 3
// 11 25 65  
// 13 11 25   
// 65 13 11
// 25 56 13

// Output:
// NO


#include<stdio.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(row > 0 && col > 0)
            {
                if(matrix[row][col] != matrix[row - 1][col - 1])
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }
    printf("YES");
    return 0;
}

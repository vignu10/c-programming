// The program must accept an integer matrix of size NxN as the input. The program must print Yes if sum of each row and sum of each column are equal to the sum of left diagonal elements. Else the program must print No as the output.

// Boundary Condition(s):
// 3 <= N <= 50

// Input Format:
// The first line contains the value of N.
// The next N lines contains N integers separated by space(s).

// Output Format:
// The first line contains either Yes or No.

// Example Input/Output 1:
// Input:
// 5
// 1 2 3 4 5
// 2 3 4 5 1
// 3 4 5 1 2
// 4 5 1 2 3
// 5 1 2 3 4

// Output:
// Yes

// Example Input/Output 2:
// Input:
// 4
// 1 2 3 4
// 2 3 4 1
// 3 4 1 2
// 4 2 3 1

// Output:
// No

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N], rowSum[N], colSum[N], diagonalSum = 0;
    for(int index = 0; index < N; index++)
    {
        rowSum[index] = 0;
        colSum[index] = 0;
    }
    for(int row = 0; row < N; row++)
    {
        for(int col = 0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
            rowSum[row] += matrix[row][col];
            colSum[col] += matrix[row][col];
            if(row == col)
            {
                diagonalSum += matrix[row][col];
            }
        }
    }
    for(int index = 0; index < N; index++)
    {
        if(diagonalSum != rowSum[index] || diagonalSum != colSum[index])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}

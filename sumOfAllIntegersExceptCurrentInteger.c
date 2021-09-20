// The program must accept an integer matrix of size NxN as the input. For each integer in the matrix, the program must print the sum of all integers in the current column except the current integer as the output. 

// Boundary Condition(s):
// 2 <= N <= 100

// Input Format:
// The first line contains the value of N.
// The next N lines each contain N integers separated by space(s).

// Output Format:
// The first N lines each contain N integers separated by a space.

// Example Input/Output 1:
// Input:
// 3 
// 9 5 1 
// 3 7 3 
// 3 6 9 

// Output:
// 6 13 12
// 12 11 10
// 12 12 4 

// Explanation:
// For the integer 9, the sum of 3 and 3 is 6.
// For the integer 5, the sum of 7 and 6 is 13.
// For the integer 1, the sum of 3 and 9 is 12.
// For the integer 3, the sum of 9 and 3 is 12.
// For the integer 7, the sum of 5 and 6 is 11.
// For the integer 3, the sum of 1 and 9 is 10.
// For the integer 3, the sum of 9 and 3 is 12.
// For the integer 6, the sum of 5 and 7 is 12.
// For the integer 9, the sum of 1 and 3 is 4.

// Example Input/Output 2:
// Input:
// 4 
// 8 8 1 9 
// 1 8 3 6 
// 7 1 9 5 
// 2 9 8 4 

// Output: 
// 10 18 20 15
// 17 18 18 18
// 11 25 12 19
// 16 17 13 20

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int mat[N][N], colSumArr[N];
    for(int col=0; col<N; col++)
    {
        colSumArr[col]=0;
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            scanf("%d",&mat[row][col]);
            colSumArr[col]=colSumArr[col]+mat[row][col];
        }
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("%d ",colSumArr[col]-mat[row][col]);
        }
        printf("\n");
    }
    return 0;
}

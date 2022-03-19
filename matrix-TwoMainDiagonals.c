// The program must accept an integer matrix of size N*N as the input. The program must print all the integers in the top-left to bottom-right diagonal of the matrix in the first line. Then the program must print all the integers in the bottom-left to top-right diagonal of the matrix in the second line.

// Boundary Condition(s):
// 2 <= N <= 50
// 1 <= Matrix element value <= 1000

// Input Format:
// The first line contains N.
// The next N lines, each contains N integer values separated by a space.

// Output Format:
// The first line contains all the integers in the top-left to bottom-right diagonal of the matrix.
// The second line contains all the integers in the bottom-left to top-right diagonal of the matrix.

// Example Input/Output 1:
// Input:
// 5
// 79 27 84 13 61
// 46 37 44 49 56
// 47 71 33 44 63
// 29 51 64 53 91
// 28 82 89 22 99

// Output:
// 79 37 33 53 99
// 28 51 33 49 61

// Explanation:
// All the integers in the top-left to bottom-right diagonal of the matrix are highlighted below.
// 79 27 84 13 61
// 46 37 44 49 56
// 47 71 33 44 63
// 29 51 64 53 91
// 28 82 89 22 99
// All the integers in the bottom-left to top-right diagonal of the matrix are highlighted below.
// 79 27 84 13 61
// 46 37 44 49 56
// 47 71 33 44 63
// 29 51 64 53 91
// 28 82 89 22 99
// Hence the output is
// 79 37 33 53 99
// 28 51 33 49 61

// Example Input/Output 2:
// Input:
// 4
// 258 783 166 108
// 489 100 482 248
// 386 252 471 243
// 472 322 410 368

// Output:
// 258 100 471 368
// 472 252 482 108
// Max Execution Time Limit: 50 millisecs


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n][n];
for(int row=0;row<n;row++)
{
    for(int col=0;col<n;col++)
    {
        scanf("%d",&arr[row][col]);
    }
}

for(int i=0;i<n;i++)
{
    printf("%d ",mat[i][i]);
}

printf("\n");

for(int i=0;i<n;i++)
{
    printf("%d ",mat[n-1-i][i]);
}
}


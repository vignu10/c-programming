// The program must accept the upper left triangle elements of an integer matrix size of NxN as the input. The program must fill the lower right triangle of the matrix with the inverted upper left triangle elements. Finally, the program must print the modified matrix as the output.

// Boundary Condition(s):
// 2 <= N <= 100

// Input Format:
// The first line contains the value of N.
// The next N lines contain the upper left triangle elements separated by space(s).

// Output Format:
// The first N line contain N elements of the modified matrix separated by space(s).

// Example Input/Output 1:
// Input:
// 4
// 3 7 3 7
// 3 2 8
// 4 8
// 9

// Output
// 3 7 3 7
// 3 2 8 3
// 4 8 2 7
// 9 4 3 3

// Explanation:
// The upper left triangle elements are
// 3 7 3 7
// 3 2 8
// 4 8
// 9
// The inverted upper left trianlge (lower right triangle) elements are
// * * * 7
// * * 8 3
// * 8 2 7
// 9 4 3 3
// Now the elements in the matrix are
// 3 7 3 7
// 3 2 8 3
// 4 8 2 7
// 9 4 3 3

// Example Input/Output 2:
// Input:
// 5
// 37 11 37 18 37
// 62 29 32 58
// 62 91 75
// 80 11
// 53

// Output:
// 37 11 37 18 37
// 62 29 32 58 18
// 62 91 75 32 37
// 80 11 91 29 11
// 53 80 62 62 37



#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N], row, col;
    for(row = 0; row < N; row++)
    {
        for(col = 0; col < N-row; col++)
        {
            scanf("%d", &matrix[row][col]);
            printf("%d ", matrix[row][col]);
        }
        for(int invertRow = row-1; invertRow >= 0; invertRow--)
        {
            printf("%d ", matrix[invertRow][N-row-1]);
        }
        printf("\n");
    }
    return 0;
}
















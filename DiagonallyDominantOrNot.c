// The program must accept an integer matrix of size NxN as the input. The program must print the matrix if the matrix is left diagonally dominant. Else the program must print No as the output. A diagonal is said to be dominant if elements in the diagonal are greater than or equal to the sum of all other elements in their row.

// Note: Consider the absolute value for calculating the sum.

// Boundary Condition(s):
// 3 <= N <= 50

// Input Format:
// The first line contains the value of N.
// The next N lines contain N integers separated by space(s).

// Output Format:
// The first line contains either 'No' or the N lines contain the matrix if diagonally dominant.

// Example Input/Output 1:
// Input:
// 3
// 3 -2 1
// 1 -3 -1
// 2 3 7

// Output:
// 3 -2 1
// 1 -3 -1
// 2 3 7

// Explanation:
// The diagonal element in the first row is 3.
// |3| >= |-2| + |1| = |3| = |3|
// The diagonal element in the second row is 3 (|-3| = 3).
// |-3| >= |1| + |-1| = |-3| > |2|
// The diagonal element in the third row is 7.
// |7| >= |2| + |3| = |7| > |5|

// Here, all the three left diagonal elements are greater than or equal to the sum of other two elements in their row. So, it is diagonally dominant.
// Hence the matrix is printed.


// Example Input/Output 2:
// Input:
// 4
// 4 -1 -1 -1
// 2 -6 2 3
// 1 2 4 1
// 2 3 1 -5

// Output:
// No


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    for(int row=0; row<N; row++)
    {
        int sum = 0;
        for(int col=0; col<N; col++)
        {
            scanf("%d", &matrix[row][col]);
            if(row != col)
            {
                sum += abs(matrix[row][col]);
            }
        }
        if(abs(matrix[row][row]) < sum)
        {
            printf("No");
            return 0;
        }
    }
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}














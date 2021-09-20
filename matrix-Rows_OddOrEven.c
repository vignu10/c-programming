// The program must accept an integer matrix of size RxC as the input. The program must print Yes if all the corresponding columns in the 1st row and the Rth row contains either odd or even element and if all the corresponding columns in the 2nd row and the (R-1)th row contains either odd or even element and so on. Else the program must print No as the output.

// Boundary Condition(s):
// 2 <= R, C <= 100

// Input Format:
// The first line contains the values of R and C separated by a space.
// The next R lines contain C elements separated by space(s).

// Output Format:
// The first line contains either Yes or No.

// Example Input/Output 1:
// Input:
// 5 4
// 12 45 22 84
// 11 79 99 50
// 10 20 30 56
// 91 15 45 64
// 88 17 40 32

// Output:
// Yes

// Explanation:
// The elements in the 1st row and 5th row are
// 12 45 22 84
// 88 17 40 32
// The corresponding column elements in the 1st row and 5th row are either odd or even.
// The elements in the 2nd row and 4th row are
// 11 79 99 50
// 91 15 45 64
// The corresponding column elements in the 2nd row and 4th row are either odd or even.
// The 3rd row is not considered as it is in the middle.
// Hence the output is Yes

// Example Input/Output 2:
// Input:
// 4 4
// 71 83 40 28
// 31 71 47 79
// 51 79 40 83
// 61 51 38 96

// Output:
// No
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row=0; row<R; row++)
    {
        for(int col=0; col <C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    int topRow=0, bottomRow=R-1;
    while(topRow < bottomRow)
    {
        for(int col=0; col<C; col++)
        {
            if(matrix[topRow][col]%2 != matrix[bottomRow][col]%2)
            {
                printf("No");
                return 0;
            }
        }
        topRow++;
        bottomRow--;
    }
    printf("Yes");
    return 0;
}


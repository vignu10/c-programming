// The program must accept an integer matrix of size RxC containing unique integers as the input. The program must find the maximum integer M among the integers in the border of the matrix. Then the program must print the output based on the following conditions.
// - If M is present in the top edge of the matrix, the program must print "TOP".
// - If M is present in the right edge of the matrix, the program must print "RIGHT".
// - If M is present in the bottom edge of the matrix, the program must print "BOTTOM".
// - If M is present in the left edge of the matrix, the program must print "LEFT".
// - If M is present in the one of the four corners of the matrix, the program must print "CORNER".

// Boundary Condition(s):
// 2 <= R, C <= 50
// 1 <= Each integer value <= 10^4

// Input Format:
// The first line contains R and C separated by a space.
// The next R lines, each contains C integers separated by a space.

// Output Format:
// The first line contains the string value "TOP" or "BOTTOM" or "RIGHT" or "LEFT" or "CORNER" based on the given conditions.

// Example Input/Output 1:
// Input:
// 5 6
// 15 34 40 95 67 69
// 82 78 10 49 24 11
// 77 73 17 74 92 68
// 88 87 32 28 57 80
// 76 54 59 21 79 22

// Output:
// TOP

// Example Input/Output 2:
// Input:
// 4 3
// 80 29 63
// 83 99 58
// 47 89 85
// 97 61 33

// Output:
// CORNER

// Example Input/Output 3:
// Input:
// 3 3
// 22 67 71
// 31 90 80
// 59 72 40

// Output:
// RIGHT




#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c;
scanf("%d %d",&r,&c);
int matrix[r][c],max=-1,maxRow=-1,maxCol=-1;
for(int row=0;row<r;row++)
{
    for(int col=0;col<c;col++)
    {
        scanf("%d",&matrix[row][col]);
        if(row==0||row==r-1||col==0||col==c-1)
        {
            if(matrix[row][col]>max)
            {
                max=matrix[row][col];
                maxRow=row;
                maxCol=col;
            }
        }
    }
}
if((maxRow==0||maxRow==r-1)&&(maxCol==0||maxCol==c-1))
{
    printf("CORNER");
}
else if(maxRow==0)
{
    printf("TOP");
}
else if(maxRow=r-1)
{
    printf("BOTTOM");
}
else if(maxCol==0)
{
  printf("LEFT");
}
else if(maxCol=c-1)
{
    printf("RIGHT");
}

}

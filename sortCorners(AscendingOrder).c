// The program must accept an integer matrix of size RxC as the input. The program must sort the integers in the four corners of the matrix in ascending order (in the clockwise direction). Then the program must print the modified matrix as the output.

// Boundary Condition(s):
// 2 <= R, C <= 50
// 1 <= Each matrix element <= 1000

// Input Format:
// The first line contains R and C separated by a space.
// The next R lines, each contains C integers separated by a space.

// Output Format:
// The first R lines contain the modified matrix.

// Example Input/Output 1:
// Input:
// 4 5
// 42 50 54 26 90
// 22 16 61 85 51
// 92 15 10 86 89
// 65 91 99 49 14

// Output:
// 14 50 54 26 42
// 22 16 61 85 51
// 92 15 10 86 89
// 90 91 99 49 65

// Example Input/Output 2:
// Input:
// 3 4
// 2 4 5 2
// 2 5 1 5
// 4 8 8 6

// Output:
// 2 4 5 2
// 2 5 1 5
// 6 8 8 4

// Example Input/Output 3:
// Input:
// 5 5
// 92 49 13 20 97
// 83 39 80 57 50
// 13 63 97 17 78
// 18 89 96 52 96
// 77 52 22 41 24

// Output:
// 24 49 13 20 77
// 83 39 80 57 50
// 13 63 97 17 78
// 18 89 96 52 96
// 97 52 22 41 92






#include<stdio.h>
#include<stdlib.h>

int main()
{
int row,col;
scanf("%d %d",&row,&col);
int mat[row][col];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
int arr[4];
arr[0]=mat[0][0];
arr[1]=mat[0][col-1];
arr[2]=mat[row-1][col-1];
arr[3]=mat[row-1][0];

for(int index=0;index<4;index++)
{
    int smallestIndex=index;
    for(int com=index+1;com<4;com++)
    {
        if(arr[com]<smallestIndex)
        {
            smallestIndex=com;
        }
    }
    int temp=arr[index];
    arr[index]=arr[smallestIndex];
    arr[smallestIndex]=temp;
}
mat[0][0]=arr[0];
mat[0][col-1]=arr[1];
mat[row-1][col-1]=arr[2];
mat[row-1][0]=arr[3];


for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d",mat[i][j]);
    }
    printf("/n");
}

}










// The program must accept an integer matrix of size RxC and a string P as the input. The string P represents a valid path in the matrix containing the characters L, R, T and B. The path P always starts from the top-left cell of the matrix. The four directions L, R, T and B are given below.
// - L indicates that the next cell is on the left.
// - R indicates that the next cell is on the right.
// - T indicates that the next cell is on the top.
// - B indicates that the next cell is on the bottom.
// The program must print the sum of integers in the given path P as the output.

// Boundary Condition(s):
// 2 <= R, C <= 50
// 1 <= Matrix element value <= 1000
// 1 <= Length of P <= 50

// Input Format:
// The first line contains R and C separated by a space.
// The next R lines, each contains C integers separated by a space.
// The (R+2)nd line contains P.

// Output Format:
// The first line contains the sum of integers in the given path P.

// Example Input/Output 1:
// Input:
// 4 5
// 5 9 9 1 8
// 2 7 8 4 3
// 4 8 4 1 3
// 7 6 2 6 8
// RRBBBRRTTLLLL

// Output:
// 78

// Example Input/Output 2:
// Input:
// 5 3
// 10 12 23
// 31 22 41
// 36 26 12
// 42 21 37
// 15 16 24
// BRTRBLL

// Output:
// 192

// Example Input/Output 3:
// Input:
// 3 4
// 1 7 8 6
// 3 9 9 9
// 2 7 6 4
// BBRTLTRR

// Output:
// 41



#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c;
scanf("%d %d",&r,&c);
int matrix[r][c];
for(int row=0;row<r;row++){
    for(int col=0;col<c;col++){
        scanf("%d",&matrix[row][col]);
    }
}
char path[51];
scanf("%s",path);
int sum=matrix[0][0],row=0,col=0;
for(int index=0;path[index];index++){
    char ch=path[index];
    switch(ch){
       case 'L':{
           col=col-1;
           break;
       }
       case 'R':{
       col=col+1;
       break;
       }
       case 'T':{
           row=row-1;
           break;
       }
       case 'B':{
           row=row+1;
           break;
       }
    }
    sum+=matrix[row][col];
}
printf("%d",sum);

}

#include<stdio.h>
#include<stdlib.h>
int r,c;
int onlyOddValues(int startRow,int startCol,int matrix[r][c])
{
    for(int r=startRow;r<startRow+3;r++)
    {
        for(int c=startCol;c<startCol+3;c++){
            if(matrix[r][c]%2==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
scanf("%d %d",&r,&c);
int matrix[r][c],count=0;
for(int row=0;row<r;row++)
{
    for(int col=0;col<c;col++){
        scanf("%d",&matrix[row][col]);
    }
}
for(int row=0;row<=r-3;row+=3)
{
    for(int col=0;col<=c-3;col+=3)
    {
        if(onlyOddValues(row,col,matrix)){
            count++;
        }
    }
}
printf("%d",count);
}


// The program must accept N integers and an integer K as the input. The program must print the integers present at the positions of multiples of K. If the multiple of K goes beyond the last integer, then the integers must be navigated in a cyclic manner(left to right) till all the integers are printed. Each time when an integer is printed, that integer must be removed from the given integers.

// Boundary Condition(s):
// 1 <= N, K <= 100
// 1 <= Each integer value <= 1000

// Input Format:
// The first line contains N.
// The second line contains N integers separated by a space.
// The third line contains K.

// Output Format:
// The first line contains N integers separated by a space.

// Example Input/Output 1:
// Input:
// 5
// 10 45 78 23 56
// 2

// Output:
// 45 23 10 56 78

// Example Input/Output 2:
// Input:
// 10
// 37 90 55 65 60 74 24 92 67 80
// 4

// Output:
// 65 92 90 24 55 80 67 37 74 60

// Example Input/Output 3:
// Input:
// 7
// 81 82 58 62 55 30 51
// 12

// Output:
// 55 62 51 30 58 82 81



#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int printed=0,ctr=0,index=0,k;
scanf("%d",&k);
while(1){
    ctr++;
    if(ctr==k){
        printf("%d ",arr[index]);
        printed++;
        ctr=0;
        arr[index]=0;
        if( printed==n){
            return 0;
        }
    }
    index++;
    if(index==n){
        index=0;
    }
    while(arr[index]==0){
        index++;
        if(index==n){
            index=0;
        }
    }
}
}

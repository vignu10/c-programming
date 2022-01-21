// The program must accept two integers X and Y as the input. The program must swap the first digit in X and Y. Then the program must print the sum of the modified values of X and Y as the output.

// Boundary Condition(s):
// 1 <= X, Y <= 10^8

// Input Format:
// The first line contains X and Y separated by a space.

// Output Format:
// The first line contains the sum of the modified values of X and Y.

// Example Input/Output 1:
// Input:
// 598 1024

// Output:
// 5222

// Example Input/Output 2:
// Input:
// 123 78

// Output:
// 741

// Example Input/Output 3:
// Input:
// 6 56

// Output:
// 71

#include<stdio.h>
#include<stdlib.h>
int getFirstDigit(int num){
    while(num>9){
        num=num/10;
    }
    return num;
}
int swapFirstDigit(int num,int fd)
{
    int mulfac=1,val=0;
    while(num>9){
        val+=(mulfac*(num%10));
        mulfac=mulfac*10;
        num/=10;
    }
    return val+fd*mulfac;
}
int main()
{
int x,y;
scanf("%d %d",&x,&y);
int fx,fy;
fx=getFirstDigit(x);
fy=getFirstDigit(y);
x=swapFirstDigit(x,fy);
y=swapFirstDigit(y,fx);
printf("%d",x+y);
}

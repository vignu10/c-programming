

// The program must accept an integer N as the input. If all the odd digits are present in N, the program must print their sum. Else the program must print -1 as the output.

// Boundary Condition(s):
// 10^4 <= N <= 10^15

// Input Format:
// The first line contains N.

// Output Format:
// The first line contains the sum of odd digits or -1.

// Example Input/Output 1:
// Input:
// 15897635

// Output:
// 30

// Example Input/Output 2:
// Input:
// 84085246

// Output:
// -1

// Example Input/Output 3:
// Input:
// 975319

// Output:
// 34







#include<stdio.h>
#include<stdlib.h>

int main()
{
long long int n,sum=0;
scanf("%lld",&n);
int digit[10]={0};
while(n!=0)
{
    int unitDigit=n%10;
    digit[unitDigit]++;
    if(unitDigit&1)
    {
     sum+=unitDigit;
    }
    n=n/10;
}
for(int odd=1;odd<=9;odd+=2)
{
    if(digit[odd]==0)
    {
        printf("-1");
    }
}
printf("%d",sum);
}

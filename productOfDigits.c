// The program must accept an integer N as the input. The program must print the product of the digits of N as the output.

// Boundary Condition(s):
// 2<= N <= 999999999

// Example Input/Output:
// Input:
// 12345

// Output:
// 120


#include<stdio.h>

int main()
{
    int N, product = 1;
    scanf("%d", &N);
    while(N > 0)
    {
        product*= N % 10;
        N/= 10;
    }
    printf("%d", product);
    return 0;
}
  
  
  
  
  

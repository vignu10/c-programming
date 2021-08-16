// The program must accept an integer N as the input. The program must print the count of composite numbers upto N as the output.

// Note: A composite number is a positive integer that has atleast one divisor other than 1 and itself.

// Boundary Condition(s):
// 2 <= N <= 999

// Example Input/Output 1:
// Input:
// 9

// Output:
// 4

// Example Input/Output 2:
// Input:
// 27

// Output:
// 17

#include <stdlib.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for(int val = 2; val <= N; val++)
    {
        double sqrtVal = sqrt(val);
        for(int ctr = 2; ctr <= sqrtVal; ctr++)
        {
            if(val % ctr == 0)
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}






















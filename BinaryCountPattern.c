// The program must accept N binary values as the input. For each binary value, the program must print the 1's count and the 0's count as the output.

// Boundary Condition(s):
// 1 <= N <= 100
// 1 <= Number of digits in each binary value <= 18

// Example Input/Output 1:
// Input:
// 5
// 10001110
// 1110000001
// 101111111001
// 1010001
// 1011

// Output:
// 4 4
// 4 6
// 9 3
// 3 4
// 3 1

// Example Input/Output 2:
// Input:
// 3
// 10010000
// 100
// 10

// Output:
// 2 6
// 1 2
// 1 1




#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        unsigned long long int val;
        scanf("%llu", &val);
        int onesCount = 0, zerosCount = 0;
        while(val > 0)
        {
            if(val % 10 == 1)
            {
                onesCount++;
            }
            else
            {
                zerosCount++;
            }
            val = val / 10;
        }
        printf("%d %d\n", onesCount, zerosCount);
    }
    return 0;
}







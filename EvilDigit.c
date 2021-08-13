
// The program must accept a positive integer N as the input. The program must print Yes if N is an evil number. Else the program must print No as the output. An Evil number is a non-negative integer which has even number of 1’s in its binary equivalent.

// Example Input/Output 1:
// Input:
// 15

// Output:
// Yes

// Explanation:
// The binary representation of 15 is 1111.
// 4 binary 1's are present in 1111.
// So 15 has even number of 1's.
// Hence the output is Yes

// Example Input/Output 2:
// Input:
// 13

// Output:
// No


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, binaryOnesCount = 0;
    scanf("%d", &N);
    while(N > 0)
    {
        binaryOnesCount += (N % 2);
        N /= 2;
    }
    printf((binaryOnesCount % 2 ==  0 ) ? "Yes" : "No");
    return 0;
}















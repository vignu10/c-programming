// The program must accept an integer array of size N as the input. The program must print all the prime integers in the array sorted in ascending order as the output. If there is no prime integer in the array then the program must print -1 as the output. 

// Boundary Condition(s):
// 2 <= N <= 100
// 1 <= Array Element Value <= 100000

// Input Format:
// The first line contains the value of N.
// The second line contains N integers separated by space(s).

// Output Format:
// The first line contains either the prime integers in the array sorted in ascending order separated by space(s) or -1.

// Example Input/Output 1:
// Input:
// 10
// 4 53 23 44 11 66 33 112 93 32

// Output:
// 11 23 53

// Explanation:
// The prime integers in the array are 53, 23 and 11. 
// The prime integers are sorted in ascending order as 11, 23 and 53.
// Hence the output is 11 23 53.

// Example Input/Output 2:
// Input:
// 8
// 4 15 12 42 111 24 76 98 

// Output:
// -1


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, val;
    scanf("%d", &N);
    int primes[N], index=0, flag = 1;
    for(int ctr=1; ctr<=N; ctr++)
    {
        scanf("%d", &val);
        for(int divCtr=2; divCtr*divCtr<=val; divCtr++)
        {
            if(val%divCtr == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1 && val >= 2)
        {
            primes[index] = val;
            index++;
        }
        flag = 1;
    }
    int primeCount = index;
    if(primeCount == 0)
    {
        printf("-1");
        return 0;
    }
    for(int index=0; index<primeCount; index++)
    {
        for(int cmpIndex=index+1; cmpIndex<primeCount; cmpIndex++)
        {
            if(primes[index] > primes[cmpIndex])
            {
                int larger = primes[index];
                primes[index] = primes[cmpIndex];
                primes[cmpIndex] = larger;
            }
        }
        printf("%d ", primes[index]);
    }
    return 0;
}











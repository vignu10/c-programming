// The program must accept a positive integer array of size N as the input. The program must print the maximum number of contiguous even numbers in the array as the output.
// Note:  At least one even integer is always present in the array.

// Boundary Condition(s):
// 2 <= N <= 50
// 1 <= Each array integer value <= 999

// Input Format:
// The first line contains the value of N.
// The second line contains N integers separated by space(s).

// Output Format:
// The first line contains the count of maximum contiguous even numbers.

// Example Input/Output 1:
// Input:
// 6
// 2 10 3 4 6 8

// Output:
// 3

// Explanation:
// In 2 10, there are 2 even numbers.
// In 4 6 8, there are 3 even numbers.
// Here 3 (3 > 2) is the maximum number of contiguous even numbers
// Hence 3 is printed as the output.

// Example Input/Output 2:
// Input:
// 8
// 10 12 13 14 12 16 18 19

// Output:
// 4

#include<stdio.h>

int main()
{
    int N, count = 1, max = 0;
    scanf("%d", &N);
    int arr[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr[index]);
    }
    for(int index = 0; index < N - 1; index++)
    {
        if(arr[index]%2 == 0 && arr[index + 1]%2 == 0)
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    printf("%d",(max > count) ? max : count);

    return 0;
}




















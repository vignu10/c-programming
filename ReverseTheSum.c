// The program must accept two integers N1 and N2 containing the same number of digits. The program must print the sum of N1 and N2 in reverse order.

// Note: All the trailing zeroes in sum must be removed.

// Boundary Condition(s):
// 2 <= N1, N2 <= 999999

// Example Input/Output 1:
// Input:
// 1233
// 3456

// Output:
// 9864

// Example Input/Output 2:
// Input:
// 245
// 155

// Output:
// 4


#include<stdio.h>

int main()
{
    int num1, num2, sum, result = 0;
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    while(sum > 0)
    {
        result = (sum % 10) + (result * 10);
        sum/=10;
    }
    printf("%d", result);

    return 0;
}














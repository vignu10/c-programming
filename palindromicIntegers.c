// The program must accept N integers as the input. The program must print only the integers which are palindrome. If there is no palindromic integer in the given N integers then the program must print -1 as the output.

// Boundary Condition(s):
// 1 <= N <= 100

// Example Input/Output 1:
// Input:
// 5
// 6776
// 8989
// 25252
// 181
// 323

// Output:
// 6776
// 25252
// 181
// 323

// Example Input/Output 2:
// Input:
// 3
// 1010
// 2221
// 3233

// Output:
// -1



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, printed = 0;
    scanf("%d", &N);
    for(int ctr = 1; ctr <= N; ctr++)
    {
        int num, currNum, revNum = 0;
        scanf("%d", &num);
        currNum = num;
        while(num > 0)
        {
            revNum = (revNum * 10) + (num % 10);
            num = num / 10;
        }
        if(currNum == revNum)
        {
            printed = 1;
            printf("%d\n", currNum);
        }
    }
    if(printed == 0)
    {
        printf("-1");
    }
    return 0;
}
















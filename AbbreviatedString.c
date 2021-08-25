// The program must accept the values of N string as the input. The program must print the abbreviated string if it is too long as the output. A string is considered to be too long if it's length is more than 10 characters. Else the program must print the same string as the output.

// Note: The abbreviation is in the format of the first character, the number of characters between the first and the last characters and the last character.

// Boundary Condition(s):
// 2 <= N <= 50
// 4 <= Length of String S <= 100

// Input Format:
// The first line contains the value of N.
// The next N lines contain the values of N string.

// Output:
// The first N lines contain the abbreviated string.

// Example Input/Output 1:
// Input:
// 3
// word
// Encyclopedia
// entertainmenT

// Output:
// word
// E10a
// e11T

// Example Input/Output 2:
// Input:
// 4
// DiSK
// hELlO
// flOwer
// moon

// Output:
// DiSK
// hELlO
// flOwer
// moon

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N, len;
    scanf("%d", &N);
    char str[101];
    for(int ctr = 1; ctr <=  N; ctr++)
    {
        scanf("%s", str);
        len = strlen(str);
        if(len - 1 > 10)
        {
            printf("%c%d%c\n", str[0], len - 2, str[len-1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;






















// The program must accept a string S as the input. The program must print the weight of the string as the output.

// Boundary Condition(s):
// 1 <= Length of S <= 100

// Example Input/Output 1:
// Input:
// moon

// Output:
// 57

// Explanation:
// The alphabet position of m is 13
// The alphabet position of n is 14
// The alphabet position of o is 15
// So the weight of the string moon is 13+15+15+14 = 57
// Hence the output is 57

// Example Input/Output 2:
// Input:
// Banglore

// Output:
// 74

#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index = 0, weight = 0;
    while(str[index] != '\0')
    {
        char ch = tolower(str[index]);
        weight += (ch - 'a' + 1);
        index++;
    }
    printf("%d", weight);
    return 0;
}
























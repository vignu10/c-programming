
// The program must accept N string values as the input. The program must print the N string values sorted lexicographically in descending order as the output.

// Note: All the alphabets are lowercase in each string.

// Boundary Condition(s):
// 1 <= N <= 50
// 1 <= Length of each string <= 1000

// Input Format:
// The first line contains the integer N.
// The next N lines each contain a string.

// Output Format:
// The first N lines each contain a string after sorted lexicographically in descending order.

// Example Input/Output 1:
// Input:
// 4
// project
// elephant
// tiger
// time

// Output:
// time
// tiger
// project
// elephant

// Example Input/Output 2:
// Input:
// 5
// orange
// watermelon 
// pineapple
// lemon
// strawberry

// Output:
// watermelon
// strawberry
// pineapple
// orange
// lemon


#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[N][1001], temp[1001];
    for(int index = 0; index <= N-1; index++)
    {
        scanf("%s", str[index]);
    }
    for(int index = 0; index <= N-1; index++)
    {
        for(int cmpIndex = index+1; cmpIndex <= N-1; cmpIndex++)
        {
            if (strcmp(str[index], str[cmpIndex]) < 0)
            {
                strcpy(temp, str[index]);
                strcpy(str[index], str[cmpIndex]);
                strcpy(str[cmpIndex], temp);
            }
        }
        printf("%s\n", str[index]);
    }
    return 0;
}
























// The program must accept a sequence of alphabets S and T as the input where T represents full scale and S represents the half scale of a measuring unit. The two half scale units can be considered as 1 full scale unit. The program must print the count of the full scale units as the output.

// Example Input/Output 1:
// Input:
// STSTSTT

// Output:
// 5

// Example Input/Output 2:
// Input:
// TSSSSSTTTTS

// Output:
// 8


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int fullScaleCount=0, halfScaleCount=0;
    char ch;
    do
    {
        scanf("%c", &ch);
        if(ch == 'T')
        {
            fullScaleCount++;
        }
        else if(ch == 'S')
        {
            halfScaleCount++;
        }
    }
    while(ch != '\r' && ch != '\n');
    printf("%d", fullScaleCount + halfScaleCount/2);
    return 0;
}















// The program must accept two lowercase alphabets (CH1 and CH2) and two integers (X and Y) as the input. The program must print the desired pattern as shown in the Example Input/Output Sections.

// Boundary Condition(s):
// 1 <= X, Y <= 10
// a <= CH1, CH2 <= z

// Input Format:
// The first line contains the values of CH1 and X separated by a space.
// The second line contains the values of CH2 and Y separated by a space.

// Output Format:
// The first line contains the desired pattern as shown in the Example Input/Output Sections.

// Exampla Input/Output 1:
// Input:
// b 2
// d 9

// Output:
// b2 b3 b4 b5 b6 b7 b8 b9 b10 c1 c2 c3 c4 c5 c6 c7 c8 c9 c10 d1 d2 d3 d4 d5 d6 d7 d8 d9

// Exampla Input/Output 2:
// Input:
// x 10
// y 10
// Output:
// x10 y1 y2 y3 y4 y5 y6 y7 y8 y9 y10



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    int X, Y;
    scanf("%c %d\n%c %d", &ch1, &X, &ch2, &Y);
    int ctr = X, max;
    while(ch1 <= ch2)
    {
        max = ch1 < ch2 ? 10 : Y;
        while(ctr <= max)
        {
            printf("%c%d ", ch1, ctr);
            ctr++;
        }
        ch1++;
        ctr = 1;
    }
    return 0;
}








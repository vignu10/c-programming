
/*The program must accept two lowercase alphabets as the input. The program must print Alphabetical if the two alphabets are in alphabetical order. Else the program must print Non Alphabetical as the output. If both alphabets are same then consider them as in alphabetical order.

Example Input/Output 1:
Input:
g k

Output:
Alphabetical

Example Input/Output 2:
Input:
t o

Output:
Non Alphabetical
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    if(ch1 <= ch2)
    {
        printf("Alphabetical");
    }
    else
    {
        printf("Non Alphabetical");
    }
    return 0;
}

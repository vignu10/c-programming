// The program must accept a string S as the input. The program must remove all the vowels and insert a character "." before each consonant in the given string S. Then the program must print the modified string as the output.

// Note: All the alphabets in S are only in lowercase.

// Boundary Condition(s):
// 3 <= Length of S <=100

// Input Format:
// The first line contains the string S.

// Output Format:
// The first line contains the modified string.

// Example Input/Output 1:
// Input:
// hello

// Output:
// .h.l.l

// Example Input/Output 2:
// Input:
// skillrack

// Output:
// .s.k.l.l.r.c.k

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index=0;
    while(str[index] != '\0')
    {
        if(str[index] != 'a' && str[index] != 'e' &&
           str[index] != 'i' && str[index] != 'o' &&
           str[index] != 'u')
        {
            printf(".%c", str[index]);
        }
        index++;
    }

    return 0;
}



















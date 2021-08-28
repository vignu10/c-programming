// The program must accept N string values as the input. The program must remove the vowels that occur in between two consonants. The program must print the modified string values as the output. 
// Note: All the alphabets are lowercase in each string.

// Boundary Condition(s):
// 1 <= N <= 50
// 1 <= Length of each string <= 1000

// Input Format:
// The first line contains the integer N.
// The next N lines each contain a string value.

// Output Format:
// The first N lines each contain the modified string value.

// Example Input/Output 1:
// Input:
// 4
// age
// laptop
// history
// great

// Output:
// age
// lptp
// hstry
// grt

// Explanation:
// In the string "age" the vowels a and e are not present in between consonants, so age is printed.
// In the string "laptop" the vowels a and o are present in between consonants, so lptp is printed.
// In the string "history" the vowels i and o are present in between consonants, so hstry is printed.
// In the string "great" the vowels e and a are present in between consonants, so grt is printed.

// Example Input/Output 2:
// Input:
// 4
// management
// reader
// snake
// chrome

// Output:
// mngmnt
// rdr
// snke
// chrme


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[1001];
    for(int ctr = 1; ctr <= N; ctr++)
    {
        scanf("%s", str);
        int len = strlen(str), index = 0;
        int firstConsIndex = -1, lastConsIndex = -1;
        while(index < len && (str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
        {
            index++;
        }
        firstConsIndex = index;
        index = len-1;
        while(index >= 0 && (str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
        {
            index--;
        }
        lastConsIndex = index;
        for(index = 0; index < len; index++)
        {
            if(index > firstConsIndex && index < lastConsIndex)
            {
                if(!(str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
                {
                    printf("%c", str[index]);
                }
            }
            else
            {
                printf("%c", str[index]);
            }
        }
        printf("\n");
    }
    return 0;
}





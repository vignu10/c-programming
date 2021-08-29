
// The program must accept a string S as the input. The program must print the first consonant in S followed by the first vowel in S, then the second consonant in S followed by the second vowel in S and so on. If there is no consonant remaining, then print the remaining vowels in the given order. If there is no vowel remaining, then print the remaining consonants in the given order as the output.
// Note: String S contains only lower case alphabets.

// Boundary Condition(s):
// 1 <= Length of S <= 1000

// Input Format:
// The first line contains the string S.

// Output Format:
// The first line contains the string value.

// Example Input/Output 1:
// Input:
// elephant

// Output:
// lepehant

// Explanation:
// The first consonant in elephant is l
// The first vowel in elephant is e
// The second consonant in elephant is p
// The second vowel in elephant is e
// The third consonant in elephant is h
// The third vowel in elephant is a
// The remaining consonants are nt.
// Hence lepehant is printed.

// Example Input/Output 2:
// Input:
// caesious 

// Output:
// casesiou


#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len=strlen(str), consSize, vowelSize, printed=0, vowels[len], consonants[len], vowelIndex=0, consIndex=0,index;
    for(index=0; str[index]!='\0'; index++)
    {
        if(str[index]=='a' || str[index]=='e'||str[index]=='i' || str[index]=='o'||str[index]=='u')
        {
            vowels[vowelIndex++]=str[index];
        }
        else
        {
            consonants[consIndex++]=str[index];
        }
    }
    consSize = consIndex;
    vowelSize = vowelIndex;
    consIndex = vowelIndex = 0;
    while(printed < len)
    {
        if(consIndex < consSize)
        {
            printf("%c",consonants[consIndex++]);
            printed++;
        }
        if(vowelIndex < vowelSize)
        {
            printf("%c",vowels[vowelIndex++]);
            printed++;
        }
    }
    return 0;
}
























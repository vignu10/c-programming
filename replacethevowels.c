// The program must accept two string values S1 and S2 as the input. For each vowel CH in the string S1, the program must replace CH by the vowel in the string S2 in the order of their occurrence. If there is no vowel in the string S2 then replace all the vowels by 'a'. If the vowels in the string S2 is not sufficient then consider last occurred vowel as the replacement vowel. Finally, the program must print the modified string S1 as the output.
// Note: S1 and S2 contain only lower case alphabets.

// Boundary Condition(s):
// 1 <= Length of S1, S2 <= 100

// Input Format:
// The first line contains the string S1.
// The second line contains the string S2.

// Output Format:
// The first line contains the modified string S1.

// Example Input/Output 1:
// Input:
// banana
// apple

// Output:
// banene

// Explanation:
// The 1st vowel in S1 is replaced by the 1st vowel in S2. Now the string S1 is banana.
// The 2nd vowel in S1 is replaced by the 2nd vowel in S2. Now the string S1 is banena.
// The 3rd vowel in S1 is replaced by the 2nd vowel in S2. Now the string S1 is banene.
// Hence the output is banene

// Example Input/Output 2:
// Input:
// abcdedfghijkl
// wxyz

// Output:
// abcdadfghajkl



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[101], str2[101], vowels[101];
    scanf("%s %s", str1, str2);
    int index1, index2, vowelIndex = 0;
    for(index2 = 0; str2[index2] != '\0'; index2++)
    {
        if(str2[index2] == 'a' || str2[index2] == 'e' || str2[index2] == 'i' || str2[index2] == 'o' || str2[index2] == 'u')
        {
            vowels[vowelIndex] = str2[index2];
            vowelIndex++;
        }
    }
    int vowelLen = vowelIndex;
    vowelIndex = 0;
    for(index1 = 0; str1[index1] != '\0'; index1++)
    {
        if(str1[index1] == 'a' || str1[index1] == 'e' || str1[index1] == 'i' || str1[index1] == 'o' || str1[index1] == 'u')
        {
            if(vowelLen != 0)
            {
                printf("%c", vowels[vowelIndex]);
                if(vowelIndex + 1 != vowelLen)
                {
                    vowelIndex++;
                }
            }
            else
            {
                printf("a");
            }
        }
        else
        {
            printf("%c", str1[index1]);
        }
    }
    return 0;
}



















// The program must accept a string S as the input. The program must print YES if all the alphabets in the string S have the same frequency. Else the program must print NO as the output.
// Note: String S contains only lower-case alphabets.

// Boundary Condition(s):
// 2 <= Length of String <= 1000

// Input Format:
// The first line contains the string S.

// Output Format:
// The first line contains either YES or NO.

// Example Input/Output 1:
// Input:
// venom

// Output:
// YES

// Explanation:
// The frequency for the alphabet 'v' is 1
// The frequency for the alphabet 'e' is 1
// The frequency for the alphabet 'n' is 1
// The frequency for the alphabet 'o' is 1
// The frequency for the alphabet 'm' is 1
// Here all the alphabets have the same frequency 1
// Hence the output YES is printed.

// Example Input/Output 2:
// Input:
// better

// Output:
// NO

// Explanation:
// The frequency for the alphabet 'b' is 1
// The frequency for the alphabet 'e' is 2
// The frequency for the alphabet 't' is 2
// The frequency for the alphabet 'r' is 1
// Here the alphabets 'b' and 'r' have the frequency 1, but the alphabets 'e' and 't' have the frequency 2
// Hence the output NO is printed.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    int alphaCount[26]={0}, count;
    for(int index=0;str[index]!='\0';index++)
    {
        alphaCount[str[index]-'a']++;
    }
    count=alphaCount[str[0]-'a'];
    for(int index=0;index<26;index++)
    {
        if(alphaCount[index]>0 && count!=alphaCount[index])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}






















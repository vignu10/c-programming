
// The program must accept a string S as the input. The program must print the number of ways to split the string into two parts so that both parts have the same alphabets.

// Boundary Condition(s):
// 1 <= Length of S <= 100

// Input Format:
// The first line contains a string S.

// Output Format:
// The first line contains the number of ways to split the string into two parts so that both parts have the same alphabets.

// Example Input/Output 1:
// Input:
// bbbb

// Output:
// 3

// Explanation:
// The number of ways the string bbbb can be split into two parts are {b, bbb}, {bb, bb}, {bbb, b}.
// Hence the output is 3.

// Example Input/Output 2:
// Input:
// acaca

// Output:
// 2

// Explanation:
// The first way in which the string acaca can be split into two parts is {a, caca}. The two parts do not contain the same alphabets.
// The second way in which the string acaca can be split into two parts is {ac, aca}. The two parts contain the same alphabets. 
// The third way in which the string acaca can be split into two parts is {aca, ca}. The two parts contain the same alphabets.
// The fourth way in which the string acaca can be split into two parts is {acac, a}. The two parts do not contain the same alphabets.
// There are two possible ways to split the string contain the same alphabets.
// Hence the output is 2




#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int rightAlphaCount[26] = {0}, leftAlphaCount[26] = {0};
    int len = strlen(str), numberOfWays = 0, index;
    for(index = 0; index < len; index++)
    {
        rightAlphaCount[str[index] - 'a']++;
    }
    index = 1;
    while(index < len)
    {
        leftAlphaCount[str[index-1] - 'a']++;
        rightAlphaCount[str[index-1] - 'a']--;
        int flag = 1;
        for(int alphaIndex = 0; alphaIndex <= 25; alphaIndex++)
        {
            if(!((leftAlphaCount[alphaIndex] == 0 && rightAlphaCount[alphaIndex] == 0)  ||
                    (leftAlphaCount[alphaIndex] > 0 && rightAlphaCount[alphaIndex] > 0)))
            {
                flag = 0;
            }
        }
        if(flag)
        {
            numberOfWays++;
        }
        index++;
    }
    printf("%d", numberOfWays);
    return 0;
}




















// The program must accept a string S representing a camel case string as the input. The program must print the words in the string as the output. Camel case is the compound of words or phrases such that each word or abbreviation in the middle of the phrase begins with a capital letter, with no intervening spaces or punctuation.

// Boundary Condition(s):
// 1 <= Length of S <= 100

// Example Input/Output 1:
// Input:
// WorldWideWeb

// Output:
// world wide web

// Explanation:
// The camel case string is WorldWideWeb.
// The words in the string are world wide web.
// Hence the output is world wide web

// Example Input/Output 2:
// Input:
// variableNamesAreInCamelCase

// Output:
// variable names are in camel case


#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index;
    for(index = 0; str[index] != '\0'; index++)
    {
        printf("%c", tolower(str[index]));
        if(isupper(str[index+1]))
        {
            printf(" ");
        }
    }
    return 0;
}


















/*The program must accept a string S till the character 'M' as the input. The program must print the string S as the output.

Example Input/Output 1:
Input:
Hello World Good Morning Have a NICE Day.

Output:
Hello World Good

Example Input/Output 2:
Input:
Student Partners (MSPs) are student technology leaders

Output:
Student Partners (        */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001];
    scanf("%[^M]",str);
    printf("%s",str);
    return 0;
}






/*The program must three characters X, Y and Z as the input. The program must print YES if the third character is equal to the difference of the second character from the first character. Else the program must print NO as the output.

Note: The characters must be in lowercase.

Example Input/Output 1:
Input:
e i d

Output:
YES

Example Input/Output 2:
Input:
g r j

Output:
NO
*/


#include <stdio.h>

int main()
{
    char X, Y, Z;
    scanf("%c %c %c", &X, &Y, &Z);
    if((Z-'a'+1) == (Y-X)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

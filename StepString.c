// The program must accept a string S containing only lower case alphabets and print if it is a step string or not. A string is a step string if adjacent alphabets differ by 1.
// Note:
// 1) The next alphabet for 'z' is 'a'.
// 2) The previous alphabet for 'a' is 'z'

// Boundary Condition(s):
// 2 <= Length of S <= 100

// Input Format:
// The first line contains S.

// Output Format:
// The first line contains Yes or No.

// Example Input/Output 1:
// Input:
// abcb

// Output:
// Yes

// Explanation:
// abcdcbc - The adjacent alphabets ab, bc, cd, dc, cb, bc all differ by +1 or -1 in position.

// Example Input/Output 2:
// Input:
// abcdba

// Output:
// No

// Explanation:
// db differ by 2. Hence abcdba is not a step string.



#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
char before,after;
for(int i=1;str[i];i++)
{
    before=str[i]=='a'?'z':str[i]-1;
    after=str[i]=='z'?'a':str[i]+1;
    if(str[i-1]!=before&&str[i-1]!=after){
        printf("No");
        return 0;
    }
}
printf("Yes");
return 0;
}


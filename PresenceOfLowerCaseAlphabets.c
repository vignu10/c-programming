
// The program must accept a string S as the input. The program must print Yes if all 26 lower case alphabets are present in the string S. Else the program must print No as the output.

// Boundary Condition(s):
// 26 <= Length of S <= 100

// Input Format:
// The first line contains S.

// Output Format:
// The first line contains the string value "Yes" or "No".

// Example Input/Output 1:
// Input:
// abcde#f#ghijklm@nopqrst123uvwxyz

// Output:
// Yes

// Example Input/Output 2:
// Input:
// zxcvmnb#777#asdflkjhpqowieruty@Gmail

// Output:
// No

// Example Input/Output 3:
// Input:
// ZHympx0wGvtusrqponmlkjiacbdphgfez

// Output:
// Yes













#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char str[101];
scanf("%s",str);
int asciiCount[128]={0};
int index=0,value[26]={0},count=0;
while(str[index]){
    
    asciiCount[str[index++]]++;
}
for(char ch='a';ch<='z';ch++)
{
    if(asciiCount[ch]==0){
        printf("No");
        return;
    }
}
printf("Yes");
return 0;
}

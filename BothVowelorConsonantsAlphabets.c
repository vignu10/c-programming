// The program must accept two lower case alphabets A and B as the input. The program must print Yes as the output if both the alphabets are either vowels or consonants. Else the program must print No as the output.

// Example Input/Output 1:
// Input:
// a m

// Output:
// No

// Example Input/Output 2:
// Input:
// e i

// Output:
// Yes

// Example Input/Output 3:
// Input:
// x y

// Output:
// Yes


#include<stdio.h>
#include<stdlib.h>
int isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return 1;
    }
    return 0;
}
int main()
{
char a,b;
scanf("%c %c",&a,&b);
if(isVowel(a)&&isVowel(b))
printf("Yes");
else if(!isVowel(a)&& !isVowel(b))
printf("Yes");
else
printf("No");
}

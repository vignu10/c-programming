// The program must accept a string S with alphabets. The program must also accept an integer N. Then the program must split S into several words at positions where a vowel occurs. The length of the words must not exceed N. The number of words split must be as minimum as possible. If there are no vowels in the last word, it can be merged with the previous word if the total length does not exceed N.

// Note: Assume it is always possible to split S based on the given conditions.

// Boundary Condition(s):
// 1 <= N <= 100
// 2 <= Length of S <= 100

// Input Format:
// The first line contains N.
// The second line contains S.

// Output Format:
// The lines containing the words of S based on the given conditions.

// Example Input/Output 1:
// Input:
// 5
// environment

// Output:
// envi
// ronme
// nt

// Example Input/Output 2:
// Input:
// 6
// yellowpagesbooks

// Output:
// yello
// wpage
// sbooks

// Example Input/Output 3:
// Input:
// 4
// yellowpagesbooks

// Output:
// ye
// llo
// wpa
// ge
// sboo
// ks

// Example Input/Output 4:
// Input:
// 1
// aaaeeiiou

// Output:
// a
// a
// a
// e
// e
// i
// i
// o
// u



#include<stdio.h>
#include<stdlib.h>
int isVowel(char ch){
   ch=tolower(ch);
   return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
int main()
{
char s[101];
int n;
scanf("%d",&n);
scanf("%s",s);
int len=strlen(s);
int index=n-1,wordStart=0;
while(1)
{
    if(index==len-1)
    {
        printf("%s",&s[wordStart]);
        break;
    }
    while(!isVowel(str[index])){
        index--;
    }
    for(int pi=wordStart;pi<=index;pi++)
    {
        printf("%c",s[pi]);
    }
    printf("\n");
    wordStart=index+1;
    index=index+n;
    if(index>len-1){
        index=len-1;
    }
}
return 0;
}


// The program must accept N string values as the input. The program must calculate the length of each string if the length is odd then the program must print the middle character in the string. Else the program must print the middle two characters in the given string as the output.

// Boundary Condtion(s):
// 1 <= N <= 20
// 1 <= Length of each string <= 100

// Input Format:
// The first line contains the integer value of N.
// The next N lines contain a string in each line.

// Output Format:
// The first N lines contain either a character or two characters.

// Example Input/Output 1:
// Input:
// 3
// hello
// orange
// watermelon

// Output:
// l
// an
// rm

// Example Input/Output 2:
// Input:
// 4
// lion
// mountain
// apple
// world

// Output:
// io
// nt
// p
// r

#include<stdio.h>

int main(){
    int N, len;
    scanf("%d", &N);
    char str[101];
    for(int ctr = 1; ctr <= N; ctr++){
        scanf("%s", str);
        len = strlen(str);
        if(len % 2 != 0){
            printf("%c\n", str[len/2]);
        }
        else{
            printf("%c%c\n", str[len/2 - 1], str[len/2]);
        }
    }
    return 0;
}























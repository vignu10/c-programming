// The program must accept four alphabets as the input. If the four alphabets are in alphabetical order print YES as the output. Else print NO as the output.

// Example Input/Output 1:
// Input:
// a c e r

// Output:
// YES

// Example Input/Output 2:
// Input:
// F U N D

// Output:
// NO


 #include<stdio.h>
#include<stdlib.h>

int main()
{
char w,x,y,z;
scanf("%c %c %c %c",&w,&x,&y,&z);
if(w<x&&x<y&&y<z)
{
    printf("YES");
}
else
{
    printf("NO");
}
}

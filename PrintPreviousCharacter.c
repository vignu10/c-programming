/*The program must accept an alphabet CH as the input. The program must print the previous alphabet of CH as the output.
Note: The alphabet CH is always in lowercase.

Example Input/Output 1:
Input:
a

Output:
z

Example Input/Output 2:
Input:
h

Output:
g
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
scanf("%c",&ch);
if(ch=='a')
{
    printf("z");
}
else
{
    printf("%c",ch-1);
}
}

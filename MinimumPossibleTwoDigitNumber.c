/*The program must accept a two digit integer N as the input. The program must print the minimum possible two-digit number formed from the digits of N.

Example Input/Output 1:
Input:
54

Output:
45

Example Input/Output 2:
Input:
67

Output:
67
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%10 > N/10 || N%10==0)
    {
        printf("%d",N);
    }
    else
    {
        printf("%d%d",N%10,N/10);
    }
    return 0;
}

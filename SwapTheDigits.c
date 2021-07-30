/*The program must accept two integers M and N as the input. The M and N contains two digits. The program must check if M is greater than N then swap the digits of M. Else swap the digits of N. finally, the program must print the sum of M and N as the output.

Example Input/Output 1: 
Input:
19 28

Output:
101

Example Input/Output 2:
Input:
45 12
*/

#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    if(M > N){
        printf("%d", ( (M%10 * 10) + M/10) + N);
    }
    else{
        printf("%d", ( (N%10 * 10) + N/10) + M);
    }
    return 0;
}

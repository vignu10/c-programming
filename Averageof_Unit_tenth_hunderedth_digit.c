/*The program must accept an integer N as the input. The program must print the average of unit digit, tenth digit and hundredth digit of N with precision up to three decimal places as the output.

Boundary Condition(s):
100 <= N <= 9999999

Example Input/Output 1:
Input:
4323

Output:
2.667

Example Input/Output 2:
Input:
150

Output:
2.000
*/


 #include<stdio.h>
#include<stdlib.h>

int main()
{
int n,sum;
scanf("%d",&n);
sum=(n%10)+(n/10)%10+(n/100)%10;
float avg=sum/3.0;
printf("%.3f",avg);
return 0;
}

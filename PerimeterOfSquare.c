/*The program must accept the side S of a square as the input. The program must print the perimeter of the square with precision up to two decimal places as the output.

Example Input/Output 1:
Input:
0.8

Output:
3.20

Example Input/Output 2:
Input:
993.36291

Output:
3973.45
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    double side;
    scanf("%lf",side);
    printf("%.2lf",4*side);
    return 0;

}

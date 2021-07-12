
/*The program must accept an integer X representing the speed of a car in km/hr as the input. The program must print the speed of the car in m/sec with precision up to 2 decimal places as the output.
Formula: speed X(km/hr) = (5/18) * X(m/sec)

Example Input/Output 1:
Input:
35

Output:
9.72

Example Input/Output 2:
Input:
120

Output:
33.33
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int speed;
    scanf("%d",&speed);
    printf("%.2f",(speed*5)/18.0);
    return 0;

}

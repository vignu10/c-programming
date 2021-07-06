/*The program must accept two coordinates as the input. The program must print the distance between the two coordinates with precision up to four decimal places

Example Input/Output 1:
Input:
(2,2)
(4,5)

Output:
3.6056

Example Input/Output 2:
Input:
(-1,1)
(3,4)

Output:
5.0000*/



#include<stdio.h>
#include<math.h>

int main(){
    int x1, x2, y1, y2;
    scanf("(%d,%d)\n(%d,%d)", &x1, &y1, &x2, &y2);
    printf("%.4lf", sqrt( ( (x2-x1)*(x2-x1) ) + ( (y2-y1) * (y2-y1) ) ));
    return 0;
}

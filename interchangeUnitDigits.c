/*The program must accept two integers X and Y as the input. 
The program must interchange only the unit digits of X and Y and print the modified X and Y as the output.

Example Input/Output 1:
Input:
234 456

Output:
236 454

Example Input/Output 2:
Input:
234 679

Output:
239 674

Example Input/Output 3:
Input:
9 7

Output:
7 9
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d%d",&x,&y);
//To separate and save the unit digits
int n=x%10;
int m=y%10;
//to delete the unit digits
x=x/10;
y=y/10;
  /*multiply the unit digit deleted value (i.e):
x=23
y=45
x*10 becomes 230 
ADD the interchanged value with x 230+4=234....vice versa             
*/  
printf("%d %d",((x*10)+m),((y*10)+n));
}

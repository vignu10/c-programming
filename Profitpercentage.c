/*Mr. A bought books and he sold those books with some profit. The program must accept two integers the cost price (CP) and the selling price (SP) as the input. The program must print the profit percentage with precision upto two decimal places as the output.

Example Input/Output 1:
Input:
54000 65000

Output:
20.37%

Example Input/Output 2:
Input:
125 185

Output:
48.00%
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int cp,sp;
scanf("%d%D",&cp,&sp);
printf("%.2lf%%",(double)sp-cp)/cp*100);
}

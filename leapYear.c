#include<stdio.h>
#include<stdlib.h>

int main()
{
int y;
scanf("%d",&y);
if(y%400==0)
{
    printf("_leap_year")
}
else if(y%100==0)
{
    printf("not_leap_year");
}
else if(y%4==0)
{
    printf("_leap_year");
}
else{
    printf("not_leap_year");
}
}

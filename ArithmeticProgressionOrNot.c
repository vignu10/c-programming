
// The program must accept three integers t1, t2 and t3 as the input. The program must print Yes if t1, t2 and t3 are in the arithmetic progression series. Else the program must print No as the output.
// Note: An arithmetic progression series is a sequence of numbers such that the difference between the consecutive terms is constant.

// Example Input/Output 1:
// Input:
// 2 4 6

// Output:
// Yes

// Example Input/Output 2:
// Input:
// 5 4 6

// Output:
// No

#include<stdio.h>
int main(){
    int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  if(z-y==y-x)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int a,b,i,j;
scanf("%d %d",&a,&b);
for(i=a,j=b;i<=b;i++,j--)
{
   if(i%2==1)
   {
       printf("%d ",i)
   }
   else if(j%2==0)
   {
       printf("%d ",j);
   }
    
}

}


// In a hospital, there are N beds in which some of the beds with patients and some are not. The corona patients cannot be in adjacent beds (i.e., There should be empty beds on the left and right side of each corona patient). The program must accept N integers containing only 0s and 1s as the input. 0 represents an empty bed and 1 represents a bed with a patient. The program also accepts an integer C representing the number of corona patients. The program must print YES if C corona patients can be admitted without violating the no adjacent corona patients rule. Else the program must print NO as the output.

// Boundary Condition(s):
// 2 <= N <= 100
// 1 <= C <= 50

// Input Format:
// The first line contains N.
// The second line contains N integers separated by a space.
// The third line contains C.

// Output Format:
// The first line contains the string value "YES" or "NO".

// Example Input/Output 1:
// Input:
// 5
// 1 0 0 0 1
// 1

// Output:
// YES

// Example Input/Output 2:
// Input:
// 6
// 1 0 0 0 1 1
// 2

// Output:
// NO

// Example Input/Output 3:
// Input:
// 10
// 0 0 0 0 0 0 0 1 0 1
// 3

// Output:
// YES

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n],c;
for(int index=0;index<n;index++){
    scanf("%d",arr[index]);
}
scanf("%d",&c);
int counter=0;
if(arr[0]==0 && arr[1]==0){
    counter++;
    arr[0]=1;
}
for(int index=1;index<n-1;index++){
    if(arr[index]==0 && arr[index-1]==0 && arr[index+1]==0){
        counter++;
        arr[index]=1;
    }
}
if(arr[n-2]==0 arr[n-1]==0){
    counter++;
    arr[n-1]=1;
}
printf(counter>=c? "YES":"NO");

}

// The runs scored by N batsmen of a cricket team is passed as the input to the program. The program must print the name of the batsman who scored the highest runs. (You can assume that no two batsmen will be the top scorers).

// Input Format:
// The first line denotes the value of N.
// Next N lines will contain the name of the batsman and the runs score (both separated by a comma)

// Output Format:
// The first line contains the name of the batsman with the top score.

// Boundary Conditions:
// 2 <= N <= 11
// The length of the names will be from 3 to 100.
// The value of the runs will be from 0 to 500.

// Example Input/Output 1:
// Input:
// 5
// BatsmanA,45
// BatsmanB,52
// BatsmanC,12
// BatsmanD,9
// BatsmanE,78

// Output:
// BatsmanE


#include <bits/stdc++.h>

using namespace #include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
//Defines no of batsmen
int n;
cin>>n;
//Define names of batsmen and their runs
string s[100];
int r[100];
//Getting inputs
for(int i=0;i<n;i++){
scanf("%s,%d",&s[i],&r[i]);
}
// //Assign a value to int max variable
int max=r[0];
int location=0;
//find max value
for(int i=1;i<n;i++){
if(r[i] > max){
    max = r[i];
    location = i;
}
}
cout<<s[location];
}std;

int main(int argc, char** argv)
{
//Defines no of batsmen
int n;
cin>>n;
//Define names of batsmen and their runs
string s[100];
int r[100];
//Getting inputs
for(int i=0;i<n;i++){
scanf("%s,%d",&s[i],&r[i]);
}
// //Assign a value to int max variable
int max=r[0];
int location=0;
//find max value
for(int i=1;i<n;i++){
if(r[i] > max){
    max = r[i];
    location = i;
}
}
cout<<s[location];
}

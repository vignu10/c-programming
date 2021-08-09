// The program must accept four integers as the input. The program must print YES if the adjacent elements of even integers are odd or if the adjacent elements of odd integers are even. Else the program must print NO as the output.

// Note: The first and fourth integers have only one adjacent integer

// Example Input/Output 1:
// Input:
// 12 89 10 21

// Output:
// YES

// Example Input/Output 2:
// Input:
// 75 91 37 82

// Output:
// NO




#include<stdio.h>

int main(){
    int N1, N2, N3, N4;
    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
    if(N1 % 2 == N3 % 2 && N2 % 2 == N4 % 2 && N1 % 2 != N2 % 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

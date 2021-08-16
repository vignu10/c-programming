// The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

// Boundary Condition(s):
// 1 <= N <= 20

// Example Input/Output 1:
// Input:
// 5

// Output:
// 1----1
// 12---21
// 123--321
// 1234-4321
// 1234554321

// Example Input/Output 2:
// Input:
// 4

// Output:
// 1---1
// 12--21
// 123-321
// 12344321

include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int row = 1; row <= N; row++){
        for(int col = 1; col <= row; col++){
            printf("%d", col);
        }
        for(int hyphen = 1; hyphen <= N-row; hyphen++){
            printf("-");
        }
        for(int col = row; col >= 1; col--){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
















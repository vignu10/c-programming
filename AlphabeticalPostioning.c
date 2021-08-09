// The program must accept three alphabets X, Y and Z as the input. The program must print YES if the alphabetical position of the first and the third alphabets are odd and the second alphabet is even. Else the program must print NO as the output.
// Note: The alphabets must be in lowercase.  The alphabetical position of a is 1, b is 2 ... z is 26.

// Example Input/Output 1:
// Input:
// y p i

// Output:
// YES

// Example Input/Output 2:
// Input:
// z j a

// Output:


#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>

int main()
{
    char X, Y, Z;
    scanf("%c %c %c", &X, &Y, &Z);
    if((X-'a'+1)%2 != 0 && (Y-'a'+1)%2 == 0 && (Z-'a'+1)%2 != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

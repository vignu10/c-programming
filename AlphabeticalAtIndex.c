// The program must accept a string S as the input. For each alphabet CH in the string S, the program must print the alphabet present at the position of the alphabetical position of CH as the output.

// Boundary Condition(s):
// 26 <= Length of S <= 100

// Example Input/Output 1:
// Input:
// sdjfwuafvbdsjklweuficwbfyr

// Output:
// ffbubcsuwdffbdsbwcuvjbduyu

// Explanation:
// For the 1st alphabet s, so the 19th alphabet in the string f is printed.
// For the 2nd alphabet d, so the 4th alphabet in the string f is printed.
// For the 3rd alphabet j, so the 10th alphabet in the string b is printed.
// For the 4th alphabet f, so the 6th alphabet in the string u is printed.
// For the 5th alphabet w, so the 23rd alphabet in the string b is printed.
// Similarly, for the remaining alphabets the corresponding alphabets are printed.
// Hence the output is ffbubcsuwdffbdsbwcuvjbduyu

// Example Input/Output 2:
// Input:
// gcufogcecvuznmvpsyzzpjmqkievvhei

// Output:
// cupgvcuoujpimnjpzkiipvnsucojjeoc


int main()
{
    char str[101];
    scanf("%s", str);
    int index;
    for(index = 0; str[index] != '\0'; index++)
    {
        printf("%c", str[str[index] - 'a']);
    }
    return 0;
}
 







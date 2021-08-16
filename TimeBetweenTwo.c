// The program must accept the starting time and the ending time in 24Hrs format hh:mm:ss as the input. The program must print the time of each second from the starting time to the ending time as the output.

// Boundary Condtion(s):
// 1 <= hh <= 24
// 0 <= mm, ss <= 59
// Starting time <= Ending time

// Example Input/Output:
// Input:
// 11:59:55
// 12:00:05

// Output:
// 11:59:55
// 11:59:56
// 11:59:57
// 11:59:58
// 11:59:59
// 12:00:00
// 12:00:01
// 12:00:02
// 12:00:03
// 12:00:04
// 12:00:05


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int startHH, startMM, startSS;
    int endHH, endMM, endSS;
    scanf("%d:%d:%d\n", &startHH, &startMM, &startSS);
    scanf("%d:%d:%d", &endHH, &endMM, &endSS);
    int hCtr = startHH, mCtr = startMM, sCtr = startSS;
    int maxMin, maxSec;
    for(; hCtr<= endHH; hCtr++)
    {
        maxMin = (hCtr == endHH) ? endMM : 59;
        for(; mCtr <= maxMin; mCtr++)
        {
            maxSec = (hCtr == endHH && mCtr == endMM) ? endSS : 59;
            for(; sCtr <= maxSec; sCtr++)
            {
                printf("%02d:%02d:%02d\n", hCtr, mCtr, sCtr);
            }
            sCtr = 0;
        }
        mCtr = 0;
    }
    return 0;
}













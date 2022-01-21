def count(sub, s): 
    M = len(sub) 
    N = len(s) 
    res = 0

    
    for i in range(N - M + 1): 
        j = 0
        while(j < M): 
            if (s[i + j] != sub[j]): 
                break
            j += 1

        if (j == M): 
            res += 1
            j = 0
    return res 

string = input()
substring = input()
print(count(substring, string))

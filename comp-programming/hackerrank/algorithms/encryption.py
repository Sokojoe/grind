#https://www.hackerrank.com/challenges/encryption/problem
#author: Sokojoe, status: Solved
#!/bin/python3

import sys, math

def encryption(s):
    l = math.sqrt(len(s))
    floor = math.floor(l)
    ceil = math.ceil(l)
    res = ''
    for w in range(0, ceil):
        for i in range (0, floor + 1):
            if (w + (i*ceil) < len(s)):
                res +=s[w + (i*ceil)]
        res += ' '
    return res

if __name__ == "__main__":
    s = input().strip()
    result = encryption(s)
    print(result)

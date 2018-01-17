#https://www.hackerrank.com/challenges/fibonacci-modified/problem
#author: Sokojoe, status: Solved
#!/bin/python3

import sys

def fibonacciModified(t1, t2, n):
    if (n == 1):
        return t2
    else:
        return fibonacciModified((t1*t1) +t2, t1, n - 1)

if __name__ == "__main__":
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t2), int(t1), int(n)]
    print(fibonacciModified(t1, t2, n))

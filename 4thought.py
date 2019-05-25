#!/usr/bin/env python2
from sys import stdin
d = {}
for op1 in ['/', '-', '+', '*']:
    for op2 in ['/', '-', '+', '*']:
        for op3 in ['/', '-', '+', '*']:
            arg = '4 {} 4 {} 4 {} 4'.format(op1, op2, op3)
            d[eval(arg)] = arg

m = int(stdin.readline())
for _ in range(m):
    n = int(stdin.readline())
    if n in d:
        print("{} = {}".format(d[n], n))
    else:
        print("no solution")

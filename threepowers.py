from sys import stdin
from math import log2, ceil, floor

n = int(stdin.readline())
while (n != 0):
    v = []
    digits = ceil(log2(n))
    for i in range(digits):
        if ((n-1) & (1 << i)):
            v.append(3**(i))
    if len(v) == 0:
        print("{ }")
    else:
        print("{ %s }" % ', '.join([str(x) for x in v]))
    n = int(stdin.readline())

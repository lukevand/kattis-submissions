import sys
import itertools
n = int(input())
t = list(map(int, input().split()))
count = 0

i = n-2
for i in range(n-2, -1, -1):
    if t[i] >= t[i+1]:
        count += t[i] - t[i+1] + 1
        t[i] = t[i+1]-1
        if t[i] < 0:
            print(1)
            sys.exit(0)

print(count)

from sys import stdin
from collections import Counter

def binom(n, k):
    if (k == 0):
        return 1
    if (k > n/2):
        return binom(n, n-k)
    else:
        return n * f(n-1, k-1) / k

n = int(stdin.readline())
while (n != 0):
    cnt = Counter()
    for _ in range(n):
        line = stdin.readline().strip()
        re = 0
        for c in line:
            re ^= ord(c)
        cnt[re] += 1
    print
    print(cnt)

    n = int(stdin.readline())


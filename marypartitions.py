import sys
sys.setrecursionlimit(1000000)
count = 0
def r(n, m, power):
    if n == 0:
        return 1
    if power <= 0:
        return 0
    if power == 1:
        return 1

    if (n, power) in memo:
        return memo[(n,power)]

    s = 0
    if n >= power:
        s = r(n-power, m, power)
    if power >= 1:
        s += r(n, m, power//m)

    memo[(n, power)] = s
    return s

n = int(input())
for i in range(1,n+1):
    memo = {}
    line = input().split()
    m = int(line[1])
    K = int(line[2])
    k = 0
    power = m
    while (power <= K):
        power *= m
    print(i, r(K, m, power))

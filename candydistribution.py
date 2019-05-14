from sys import stdin

def egcd(a, b):
    x0, x1, y0, y1 = 0, 1, 1, 0
    while a != 0:
        q, b, a = b // a, a, b % a
        y0, y1 = y1, y0 - q * y1
        x0, x1 = x1, x0 - q * x1
    return b, x0, y0


t = int(stdin.readline())
for _ in range(t):
    line = stdin.readline().split()
    K = int(line[0])
    C = int(line[1])
    upperbound = 10**9
    xs = egcd(C, K)
    # if C == K+1:
    #     print(1)
    if C == 1 and K >= upperbound:
        print("IMPOSSIBLE")
    elif C == 1:
        print(K+1)
    elif K == 1:
        print(1)
    elif xs[0] != 1:
        print("IMPOSSIBLE")
    else:
        numbags = xs[1]%K
        if numbags == 0:
            print("IMPOSSIBLE")
        else:
            print(numbags)



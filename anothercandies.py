from sys import stdin

T = int(stdin.readline())
for _ in range(T):
    stdin.readline()
    N = int(stdin.readline())
    s = 0
    for _ in range(N):
        s += int(stdin.readline())
    if s % N == 0:
        print("YES")
    else:
        print("NO")


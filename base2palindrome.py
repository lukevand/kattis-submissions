from sys import stdin
for i, j in enumerate([(x, bin(x)) for x in range(1, 100) if bin(x)[2:] == bin(x)[:1:-1]]):
    print(i, j)
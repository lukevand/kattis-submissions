from sys import stdin

# def pp(g):
#     for row in g:
#         for el in row:
#             print("{:10d}".format(el), end=' ')
#         print()
#     print()

INF = 1000000000

line = stdin.readline().split()
n = int(line[0])  # length
m = int(line[1])+1  # numlanes
line = stdin.readline().split()
k = int(line[0])
r = int(line[1])

straightaway = [int(stdin.readline()) for _ in range(n)]
curves = []
for _ in range(n-1):
    line = stdin.readline().split()
    curves.append((int(line[0]), int(line[1])))

n = 2*n
memo = [[0] * n for _ in range(m)]
for lane in range(2, m):
    memo[lane][0] = INF

memo[1][0] = 0
lc = len(curves)

for position in range(1, n, 2):
    # print(position)
    pos = position//2
    for lane in range(1, m):
        best = INF
        for prev in range(1, m):
            change = abs(lane - prev)*r
            if change+k <= straightaway[pos-1]:
                best = min(best, change+memo[prev][position-1])
        memo[lane][position] = min(best, memo[lane][position-1]) + straightaway[pos-1]

    if pos >= lc: break
    for lane in range(1,m):
        memo[lane][position+1] = memo[lane][position] + curves[pos][0] + curves[pos][1]*lane

# pp(memo)
print(memo[1][-1])

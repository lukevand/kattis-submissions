# Too slow!
from sys import stdin
from queue import Queue

n, m = [int(x) for x in stdin.readline().split()]
A = []
for _ in range(n):
    A.append([int(x) for x in stdin.readline().strip()])

q = Queue()
q.put((0, 0))
d = [[0 for _ in range(m)] for _ in range(n)]
# d[0][0] = 0

# print(A)
while not q.empty():
    i, j = q.get(block=False)
    jump = A[i][j]
    if i == n-1 and j == m-1:
        break
    if i + jump < n and d[i+jump][j] == 0:
            d[i+jump][j] = d[i][j] + 1
            q.put((i+jump, j))
    if i - jump >= 0 and d[i-jump][j] == 0:
            d[i-jump][j] = d[i][j] + 1
            q.put((i-jump, j))
    if j + jump < m and d[i][j+jump] == 0:
            d[i][j+jump] = d[i][j] + 1
            q.put((i, j+jump))
    if j - jump >= 0 and d[i][j-jump] == 0:
            d[i][j-jump] = d[i][j] + 1
            q.put((i, j-jump))

re = d[n-1][m-1]
# print(d)
if (re != 0):
    print(re)
else:
    print(-1)

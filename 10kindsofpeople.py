from sys import stdin
import deepcopy

def flood(grid, m, n, i, j, end_i, end_j):
    if (i < 0 or i >= m or j < 0 or j >= n):
        return False
    elif (i == end_i and j == end_j):
        return True

r, c = map(int, stdin.readline().split(' '))
print(r, c)
grid = [[0] * c for _ in range(r)]
for i in range(r):
    line = stdin.readline();
    for j in range(c):
        grid[i][j] = line[j]

n = int(stdin.readline())
for _ in range(n):
    start_i, start_j, end_i, end_j = map(int(stdin.readline().split()))
    startchar = grid[start_i][start_j]
    endchar = grid[end_i][end_j]
    if endchar != startchar:
        print(False)


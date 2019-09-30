import sys

sys.setrecursionlimit(1000000)

G = {}
visted = {}
parent = {}
inCycle = {}

EXPLORED = 1
VISTED = 0
UNVISTED = -1

def dfs(u):
    visted[u] = EXPLORED
    for v in G[u]:
        if visted[v] == UNVISTED:
            parent[v] = u
            dfs(v)
        elif visted[v] == EXPLORED:
            inCycle[v] = True
            w = u
            while (w != v):
                inCycle[w] = True
                w = parent[w]
    visted[u] = VISTED


n = int(input())
for _ in range(n):
    depart, dest = input().split()
    parent[dest] = depart
    if dest not in G:
        G[dest] = []
    if depart not in G:
        G[depart] = [dest]
    else:
        G[depart].append(dest)

for v in G.keys():
    inCycle[v] = False
    visted[v] = -1

for v in G:
    if visted[v] == UNVISTED:
        dfs(v)

for line in sys.stdin.readlines():
    line = line.strip()
    print(line, end=' ')
    if inCycle[line]:
        print("safe")
    else:
        print("trapped")


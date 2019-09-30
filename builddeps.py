import sys
sys.setrecursionlimit(10**6)
n = int(input())
G = {}
order = []

visted = {}

def dfs(v):
    visted[v] = True
    for u in G[v]:
        if not visted[u]:
            dfs(u)
    global order
    order.append(v)


for _ in range(n):
    target, deps = input().split(':')
    visted[target] = False
    if target not in G:
        G[target] = []
    for dep in deps.split():
        if dep in G:
            G[dep].append(target)
        else:
            G[dep] = [target]

goal = input().strip()
dfs(goal)
order.reverse()
print('\n'.join(order))

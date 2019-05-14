from sys import stdin

line = stdin.readline().split()
N = int(line[0])
T = int(line[1])
queue = [[] for _ in range(T+1)]
for _ in range(N):
    line = stdin.readline().split()
    c = int(line[0])
    t = int(line[1])
    queue[t].append(c)

# best = []
# queue.sort(reverse=True)
print(sum(max(t) for t in queue if len(t)>0))
# for el in queue:



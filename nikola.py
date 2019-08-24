from sys import stdin
from queue import PriorityQueue

INF = int(1e2)
N = int(stdin.readline())
C = [int(n) for n in stdin.readlines()]

pq = PriorityQueue()
pq.put((0, 0, 0))

dist = {(0, 0): 0}
print(C)
print(dist)

while not pq.empty():
    # print([min(x, 100) for x in dist])
    cost, current, jump = pq.get()
    print(cost, current, jump)
    if dist[(current,jump)] < cost:
        continue
    if current == N-1:
        break
    nxt = current - jump
    if 0 <= nxt and nxt < N:
        print('back')
        if (nxt, jump) not in dist or dist[(nxt,jump)] + C[nxt] < dist[(nxt,jump)]:
            dist[(nxt,jump)] = dist[(nxt,jump)] + C[nxt]
            pq.put((dist[(nxt,jump)], nxt, jump))
    nxt = current + jump + 1
    if 0 <= nxt and nxt < N:
        print('nxt')
        if (nxt, jump) not in dist or dist[(nxt,jump+1)] + C[nxt] < dist[(nxt,jump+1)]:
            print('adsf')
            dist[(nxt,jump+1)] = cost + C[nxt]
            pq.put((dist[(nxt,jump)], nxt, jump+1))

print(dist)

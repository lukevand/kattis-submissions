from sys import stdin
import bisect

nextpossible = {
        1: [1,2,3,4,5,6,7,8,9,0],
        2: [2,3,5,6,8,9,0],
        3: [3,6,9],
        4: [4,5,6,7,8,9,0],
        5: [5,6,8,9,0],
        6: [6,9],
        7: [7,8,9,0],
        8: [8,9,0],
        9: [9],
        0: [0]
        }

def call_r(n, seen, times, result):
    if times == 0:
        result.append(seen[:])
        return
    else:
        re = []
        for i in nextpossible[n]:
            seen.append(i)
            call_r(i, seen, times-1, result)
            seen.pop()

def ttoi(t):
    if len(t) == 3:
        return 100*t[0] + 10*t[1] + t[2]
    elif len(t) == 2:
        return 10*t[0] + t[1]


n = int(stdin.readline())
re = []
call_r(1, [], 2, re)
call_r(1, [], 3, re)
r = [ttoi(x) for x in re]
r = [x for x in r if x <=200]
r.sort()
# print(r)

for _ in range(n):
    search = int(stdin.readline())
    # search = n
    if search < 10:
        print(search)
        continue
    t = bisect.bisect_right(r, search)
    # print(t)
    if r[t-1] == search:
        print(search)
    else:
        print(r[t-1] if abs(r[t-1] - search) < abs(r[t] - search) else r[t])

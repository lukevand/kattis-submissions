from sys import stdin

for line in (l for l in stdin.readlines()):
    bs = [0]*5000
    m = [int(x) for x in line.split()]
    m.sort()
    n = len(m)
    maxmark = max(m)
    sums = []
    done =False
    for i in range(n):
        for j in range(i):
            if done: continue
            s = m[i]-m[j]
            if bs[s]:
                print("not a ruler")
                done=True
                break;
            else:
                bs[s] = 1
    if not done:
        bad = []
        for i in range(1, maxmark):
            if bs[i] == 0:
                bad.append(i)
        if len(bad) > 0:
            print("missing", ' '.join(str(x) for x in bad))
        else:
            print("perfect")




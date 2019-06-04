from sys import stdin

def lis(t):
    if len(t) == 0 or len(t) == 1:
        return 1
    else:
        m = -1
        for i, el in enumerate(t):
            if el < t[-1]:
                m = max(lis(t[:i])+1, m)
        return m

print(lis([1, 25, 2, 3]))
print(lis([90,4,10000,2,18,60,172,99,1,2,3,4,5,6]))

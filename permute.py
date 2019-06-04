from sys import stdin

s = ['a', 'b', 'c']

def perm(s, seen):
    # print("start", s, seen)
    if (len(s) == 0):
        print(seen)
    else:
        for i in range(len(s)):
            # print(i)
            picked = s.pop(i)
            seen.append(picked)
            perm(s[:i] + s[i+1:], seen)
            unpicked = seen.pop()
            s.append(unpicked)

def permu(t, start, end):
    if start == end:
        yield t
    else:
        for i in range(start, end):
            t[start], t[i] = t[i], t[start]
            permu(t, start+1, end)
            t[start], t[i] = t[i], t[start]


print(permu(s, 0, len(s)))

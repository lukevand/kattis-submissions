from sys import stdin

# line = stdin.readline()
lines = [line.strip() for line in stdin.readlines()]
n = len(lines)

def sor(t):
    t.sort(key=lambda x: x[::-1])

    ma = max(len(x) for x in t)
    for el in t:
        print("%*s" % (ma, el))


start=0
for i, el in enumerate(lines):
    if el == '':
        # print(i, lines[start:i])
        sor(lines[start:i])
        start = i+1
        if i < n-1:
            print()
    elif i == n-1:
        sor(lines[start:])

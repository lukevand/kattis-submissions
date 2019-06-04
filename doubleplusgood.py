from sys import stdin

line = stdin.readline().strip().split('+')
print(line)

n = len(line)-1
limit = 1L << n
for i in range(limit):
    for j in range(n):
        if (i & (1<<j)):



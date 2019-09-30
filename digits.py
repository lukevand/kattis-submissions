from sys import stdin
import math

for line in stdin.readlines():
    if line[0] == 'E': break
    n = len(line)-1
    c = 2
    if (n == 1):
        if line[0] == '1':
            print(1)
            continue
        else:
            print(2)
            continue
    while 1:
        c += 1
        n = len(str(n))
        if n == 1:
            break
    print(c)

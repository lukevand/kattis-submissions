from sys import stdin
from math import log10

def dec(x): return x//int(math.log10(x))
line = stdin.readline().strip()
lenn = len(line)-1
print(int(line)/lenn)

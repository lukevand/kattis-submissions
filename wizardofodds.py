import sys
from math import log2

for line in sys.stdin:
    N, K = line.split()
    if log2(int(N)) <= int(K):
        print("Your wish is granted!")
    else:
        print("You will become a flying monkey!")


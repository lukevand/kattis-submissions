#!/usr/bin/env python3

from sys import stdin

T = int(stdin.readline())
for _ in range(T):
    d = int(stdin.readline())
    n = pow(9, (d-1), 1_000_000_007)
    print((n*8) % 1_000_000_007)

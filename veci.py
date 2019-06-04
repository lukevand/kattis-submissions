from sys import stdin
import itertools
num = stdin.readline().strip()
n = int(num)

smallest_diff = 10**10
next_smallest_num = 10**10
for perm in itertools.permutations(num):
    permint = int(''.join(perm))
    if permint > n:
        diff = permint - n
        if diff < smallest_diff:
            smallest_diff = diff
            next_smallest_num = permint
print(next_smallest_num if next_smallest_num != 10**10 else 0)

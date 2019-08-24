from sys import stdin

factorials = [1]
for i in range(1, 50):
    factorials.append(factorials[i-1] * i)


def rank_permutation(r, n):
    fact = factorials[n-1]
    digits = list(range(n))
    p = []
    for i in range(n):
        print(digits)
        q = r // fact
        r %= fact
        p.append(digits[q])
        del digits[q]
        if i != n - 1:
            fact //= (n - 1 - i)
    return p


for line in stdin.readlines():
    n, k = map(int, line.split())
    print(' '.join(str(x+1) for x in rank_permutation(k, n)))

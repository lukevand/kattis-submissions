from sys import stdin

from sympy import factorial as f

n = 3
a = sum(f(i) * f(n - i - 1) for i in range(n))
b = sum(f(i) * f(j - i - 1) * f(n - j - 1) for i in range(n-1) for j in range(i+1, n))
c = sum(f(i) * f(j - i - 1) * f(k - j - 1) * f(n - k - 1) for i in range(n-2) for j in range(i+1, n-1) for k in range(j+1, n))
print(a, b, c)

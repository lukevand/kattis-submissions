import math
n = int(input())
realn = int(n)

counter = 0
factors = []
if n % 2 == 0:
    factors.append(2)
    factors.append(n//2)
    n //= n//2
for i in range(3, int(math.sqrt(n)+1), 2):
    if n % i == 0:
        factors.append(i)
        factors.append(n//i)
        n //= n//i

if factors:
    print(realn - factors[-1])
else:
    print(realn - 1)

# for i in range(realn-1, 0, -1):
#     counter += 1
#     if realn % i == 0:
#         break
# print(counter)

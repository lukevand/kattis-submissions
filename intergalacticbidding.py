n, s = map(int, input().split())
names = {}
nums = []
for _ in range(n):
    line = input().split()
    names[int(line[1])] = line[0]
    nums.append(int(line[1]))

nums.sort()
used = []
total = 0
rem = s
for i, el in enumerate(reversed(nums)):
    if el <= rem:
        used.append(el)
        rem -= el

if rem == 0:
    print(len(used))
    print('\n'.join(names[x] for x in used))
else:
    print(0)

s = input()
u = 0
d = 0
cross = 0
for i in range(1, len(s)):
    if s[i] == 'U':
        u += 2
    if s[i] == 'D':
        d += 2
    if s[i] != s[i-1]:
        cross += 1

if s[0] == 'D':
    if s[1] == 'D':
        d -= 1
    if s[1] == 'U':
        d += 1

if s[0] == 'U':
    if s[1] == 'U':
        u -= 1
    if s[1] == 'D':
        u += 1

print(d, u, cross, sep='\n')

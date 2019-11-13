h, w = map(int, input().split())
t = [input() for _ in range(h)]
transpose = [[0] * h for _ in range(w)]
for i in range(h):
    for j in range(w):
        transpose[j][i] = t[i][j]
count = [h-tt.count('.') for tt in transpose]

seen = False
first = 1000
last = -1000
for i, c in enumerate(t[h-1]):
    if not seen and c != '.':
        first = i
        seen = True
    if c != '.':
        last = i

last += 1

re = 0
totalW = 0
for i in range(w):
    re += count[i]*(i+0.5)
    totalW += count[i]

cg = re/totalW
if cg < first:
    print('left')
elif cg >= last:
    print('right')
else:
    print('balanced')

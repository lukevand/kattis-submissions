h = int(input())
r = h % 8
if r == 0:
    print(h)
else:
    print(h-r+5 if r <= 5 else h + 8 - r)

n = int(input())
for _ in range(n):
    num = input().strip()
    count = 0
    for i in range(1,len(num)+1):
        inum = int(num[0:i])
        count = max(bin(inum).count('1'), count)
    print(count)

from sys import stdin

d = {
        "at": "@",
        "and": "&",
        "one": "1",
        "won": "1",
        "to": "2",
        "too": "2",
        "two": "2",
        "bea": "b",
        'be': 'b',
        'bee': 'b',
        'sea': 'c',
        'see': 'c',
        'eye': 'i',
        'oh': 'o',
        'owe': 'o',
        'are': 'r',
        'you': 'u',
        'why': 'y'
        }

n = int(stdin.readline())
lines = [stdin.readline().strip() for _ in range(n)]
print(lines)

for line in lines:
    words = line.split()
    for pattern


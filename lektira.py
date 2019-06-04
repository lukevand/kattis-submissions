from sys import stdin

word = stdin.readline().strip()
n = len(word)

words = []
for i in range(1, n-1):
    for j in range(i+1, n):
        # print(word[:i], word[i:j], word[j:])
        words.append(word[:i][::-1] + word[i:j][::-1] + word[j:][::-1])

print(sorted(words)[0])

